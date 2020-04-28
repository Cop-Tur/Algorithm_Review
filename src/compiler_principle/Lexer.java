package compiler_principle;

import java.util.ArrayList;
import java.util.Scanner;

public class Lexer {
    private static class Tuple {
        public int row;
        public int token;
        public String statement;

        public Tuple(int row, int token, String statement) {
            this.row = row;
            this.token = token;
            this.statement = statement;
        }
    }

    private static class Error{
        public int row;
        public String statement;

        public Error(int row, String statement) {
            this.row = row;
            this.statement = statement;
        }
    }

    private ArrayList<String> inp = new ArrayList<>();
    private ArrayList<Error> err = new ArrayList<>();
    private ArrayList<Tuple> tuples = new ArrayList<>();

    public void inpProgram() {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        while (!s.equals("ENDINP")) {
            if (!s.equals("") && !s.contains("{") && !s.contains("}"))
                inp.add(s);
            if (s.contains("{")) {
                int index1 = s.indexOf("{");
                if (s.contains("}")) {
                    int index2 = s.indexOf("}");
                    String tmp = s.replace(s.substring(index1, index2 + 1), "");
                    inp.add(tmp);
                } else {
                    err.add(new Error(inp.size(),"'}'expected"));
                }
            }
            s = sc.nextLine();
        }
    }

    public void printTuple(Tuple tuple) {
        if (tuple.token >= 1 && tuple.token <= 8)
            System.out.println("   " + tuple.row + ": reserved word: " + tuple.statement);
        if (tuple.token >= 9 && tuple.token <= 18)
            System.out.println("   " + tuple.row + ": " + tuple.statement);
        if (tuple.token == 19)
            System.out.println("   " + tuple.row + ": NUM, value = " + tuple.statement);
        if (tuple.token == 20)
            System.out.println("   " + tuple.row + ": ID, name = " + tuple.statement);
        if (tuple.token == 21)
            System.out.println("   " + tuple.row + ": CHAR, value = \"" + tuple.statement + "\"");
    }

    public <AnyType> boolean contains(AnyType[] s, AnyType inp) {
        for (AnyType tmp : s) {
            if (inp.equals(tmp))
                return true;
        }
        return false;
    }

    public boolean isNumber(String s) {
        return s.matches("[0-9]*");
    }

    public boolean isLetter(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
    }

    public int getKeyToken(String s) {
        int token = 0;
        for (int i = 0; i < KEY.length; i++) {
            if (s.equals(KEY[i]))
                token = i + 1;
        }
        return token;
    }

    public int getSymbolToken(String s) {
        int token = 0;
        for (int i = 0; i < SYMBOL.length; i++) {
            if (s.equals(SYMBOL[i]))
                token = i + 1 + KEY.length;
        }
        return token;
    }

    public void lexAnalys() {
        for (int row = 0; row < inp.size(); row++) {
            String line = inp.get(row);
            System.out.println(row + ": " + line);
            int i = 0;
            char ch;

            while (i <= line.length() - 1) {
                ch = line.charAt(i);
                //判断读取的第一个字符是否为字母
                if (isLetter(ch)) {
                    StringBuilder stringBuilder = new StringBuilder();
                    stringBuilder.append(ch);
                    //读取下一个字符
                    ch = line.charAt(++i);
                    //第一个字母，循环读取后面的字母或数字
                    while ((isLetter(ch)) || isNumber(ch + "")) {
                        stringBuilder.append(ch);
                        if (i == line.length() - 1) {
                            i++;
                            break;
                        } else {
                            ch = line.charAt(++i);
                        }
                    }

                    //判断当前字符串是否是key
                    if (contains(KEY, stringBuilder.toString())) {
                        //获取该key的token
                        int token = getKeyToken(stringBuilder.toString());
                        //输出二元组
                        tuples.add(new Tuple(row, token, stringBuilder.toString()));
                        printTuple(new Tuple(row, token, stringBuilder.toString()));
                    }
                    //标识符，输出标识符的二元组
                    else {
                        tuples.add(new Tuple(row, 20, stringBuilder.toString()));
                        printTuple(new Tuple(row, 20, stringBuilder.toString()));
                    }
                }
                //如果是symbol
                else if (contains(SYMBOL, ch + "")) {
                    tuples.add(new Tuple(row, getSymbolToken(ch + ""), ch + ""));
                    printTuple(new Tuple(row, getSymbolToken(ch + ""), ch + ""));
                    i++;
                }
                //如果是':',需要继续读取一个字符进行判断是否是:=
                else if (ch == ':') {
                    StringBuilder stringBuilder = new StringBuilder();
                    stringBuilder.append(ch);
                    char nextCh = line.charAt(++i);
                    //如果字符为'='
                    if (nextCh == '=') {
                        stringBuilder.append(nextCh);
                        tuples.add(new Tuple(row, getSymbolToken(stringBuilder.toString()), stringBuilder.toString()));
                        printTuple(new Tuple(row, getSymbolToken(stringBuilder.toString()), stringBuilder.toString()));
                        i++;
                    }
                    //只有一个冒号 错误
                    else {
                        err.add(new Error(row, "'='expected"));
                    }
                }

                //如果读取的字符为"
                else if (ch == '"') {
                    StringBuilder stringBuilder = new StringBuilder();
                    stringBuilder.append(ch);
                    if (i == line.length() - 1) {
                        i++;
                        break;
                    } else {
                        ch = line.charAt(++i);
                        while (ch != '"') {
                            stringBuilder.append(ch);
                            if (i == line.length() - 1) {
                                i++;
                                break;
                            } else {
                                ch = line.charAt(++i);
                            }
                        }
                    }
                    if (ch == '"') {
                        //输出的是字符常数
                        tuples.add(new Tuple(row, 21, stringBuilder.toString()));
                        printTuple(new Tuple(row, 21, stringBuilder.toString()));
                    } else {
                        err.add(new Error(row, "'\"'expected"));
                    }
                    i++;
                }
                //非法字符
                else if (!contains(SYMBOL, ch) && !isNumber(ch + "") && !isLetter(ch) && ch != ' ' && ch != '\t') {
                    err.add(new Error(row, "error character!"));
                    i++;
                }
                //第一次读入的是数字
                else if (isNumber(ch + "")) {
                    StringBuilder stringBuilder = new StringBuilder();
                    while (isNumber(ch + "") || ch == '.') {
                        stringBuilder.append(ch);
                        if (i == line.length() - 1) {
                            i++;
                            break;
                        }
                        ch = line.charAt(++i);
                    }
                    tuples.add(new Tuple(row, 19, stringBuilder.toString()));
                    printTuple(new Tuple(row, 19, stringBuilder.toString()));

                } else {
                    i++;
                }
            }
        }
        for (Error error : err) {
            System.out.println("error: " + error.statement + " at row: " + error.row);

        }
    }


    private static final String[] KEY = {"if", "then", "else", "endif", "repeat",
            "until", "read", "write"};
    private static final String[] SYMBOL = {"+", "-", "*", "/", "=", "<", "(", ")", ";", ":="};

    /*
    if 1 then 2 else 3 end 4 repeat 5 until 6 read 7 write 8
    + 9  - 10  * 11  / 12  = 13  < 14  ( 15  ) 16  ; 17  := 18
    数 19  标识符 20  字符 21

    */


    public static void main(String[] args) {
        Lexer lexer = new Lexer();
        lexer.inpProgram();
        lexer.lexAnalys();
    }
}
