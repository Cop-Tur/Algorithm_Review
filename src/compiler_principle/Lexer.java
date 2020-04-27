package compiler_principle;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class Lexer {
    private ArrayList<String> inp = new ArrayList<>();
    private HashMap<Integer, String> err = new HashMap<>();

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
                    String tmp = s.replace(s.substring(index1, index2 + 2), "");
                    inp.add(tmp);
                } else {
                    err.put(inp.size(), "'}'expected");
                }
            }
            s = sc.nextLine();
        }
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

    public boolean isLetter(char s) {
        return Character.isLetter(s);
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

    /*public void lexAnalys() {
        for (int row = 0; row < inp.size(); row++) {
            String line = inp.get(row);
            int i = 0;
            char ch;

            while (i <= line.length() - 1) {
                ch = line.charAt(i);
                //判断读取的第一个字符是否为字母
                if (isLetter(ch)) {
                    StringBuffer stringBuffer = new StringBuffer();
                    stringBuffer.append(ch);

                    //读取下一个字符
                    ch = line.charAt(++i);
                    //非第一个字符时，可以为字母和数字
                    while ((isLetter(ch)) || isNumber(ch + "")) {
                        stringBuffer.append(ch);
                        //如果读取到行的末尾则跳出循环，否则继续读取
                        if (i == line.length() - 1) {
                            i++;
                            break;
                        } else {
                            ch = line.charAt(++i);
                        }
                    }

                    //判断当前字符串是否是关键字
                    if (contains(KEY, stringBuffer.toString())) {
                        //获取该关键字的种别码
                        int kindCode = getKeyToken(stringBuffer.toString());
                        //输出该关键字的二元组
                        System.out.print("(" + kindCode + "," + stringBuffer.toString() + ")" + "  ");
                    }
                    //标识符，输出标识符的二元组
                    else {
                        System.out.print("(" + "变量" + "," + stringBuffer.toString() + ")" + "  ");
                    }
                }
                //如果是symbol
                else if (contains(SYMBOL, ch)) {

                    System.out.println("(" + getSymbolToken(ch + "") + "," + ch + ")" + "  ");
                    i++;
                }
                //如果是':',需要继续读取一个字符进行判断是否是双界符
                else if (ch == ':') {
                    StringBuffer stringBuffer = new StringBuffer();
                    stringBuffer.append(ch);
                    //读取下一个字符
                    char nextCh = line.charAt(++i);
                    //如果字符为'='
                    if (nextCh == '=') {
                        stringBuffer.append(nextCh);
                        //输出双界符相关的二元数组
                        System.out.print("(" + getSymbolToken(stringBuffer.toString())
                                + "," + stringBuffer.toString() + ")" + "  ");
                        i++;
                    }
                    //单单一个冒号 错误
                    else {
                        err.put(row, "'='expected");
                    }
                }


                //如果读取的字符为'或"
                else if ((ch + "").equals("'") || ch == '"') {
                    StringBuffer stringBuffer = new StringBuffer();
                    stringBuffer.append(ch);
                    if (i == line.length() - 1) {
                        i++;
                        break;
                    }
                    //继续读取字符
                    else {
                        ch = line.charAt(++i);
                    }

                    if (stringBuffer.charAt(0) == dyh.charAt(0)) {
                        StringBuffer stringBuffer1 = new StringBuffer();
                        stringBuffer1.append(ch);
                        col++;
                        if (i == line.length() - 1) {
                            i++;
                            break;
                        } else {
                            ch = line.charAt(++i);
                            col++;
                            while (ch != dyh.charAt(0)) {
                                stringBuffer.append(ch);
                                if (i == line.length() - 1) {
                                    i++;
                                    break;
                                } else {
                                    //继续读取字符
                                    ch = line.charAt(++i);
                                    col++;
                                }
                            }
                        }
                        if (ch == dyh.charAt(0)) {
                            //输出的是字符常数
                            System.out.print("(" + 36 + "," + stringBuffer1.toString() + ")" + "  ");
                            count++;
                        } else {
                            System.out.print("error:单引号不匹配" + "第" + row + "行,第" + col + "列");
                        }
                        i++;
                    }
                }
                if (count % 5 == 0) {
                    System.out.println();
                }
            }
            //非法字符判断
                else if (isDlimeter(ch) == false && isNumber(ch) == false && isLetter(ch) == false && ch != ' ') {
                System.out.print("error:出现非法字符：" + ch + ",第" + row + "行,第" + col + "列");
                i++;
                col++;
            }
            //第一次读入的是数字
            else if (isNumber(ch)) {
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append(ch);
                col++;
                ch = line.charAt(++i);
                if (isNumber(ch)) {
                    while (isNumber(ch)) {
                        stringBuffer.append(ch);
                        col++;
                        ch = line.charAt(++i);
                    }
                    System.out.print("(" + 35 + "," + stringBuffer.toString() + ")" + "");
                    count++;
                }
                //一位数时，输出二元组
                else {
                    System.out.print("(" + 35 + "," + stringBuffer.toString() + ")" + " ");
                    count++;
                }
                if (isLetter(ch)) {
                    while (isLetter(ch)) {
                        stringBuffer.append(ch);
                        col++;
                        ch = line.charAt(++i);
                    }
                    System.out.print("error:非法字符" + stringBuffer.toString() + " 第 " + row + " 行,第" + col + " 列出错");
                }
                if (count % 5 == 0) {
                    System.out.println();
                }
            } else {
                i++;
                col++;
            }
        }


    }*/


    private static final String[] KEY = {"if", "then", "else", "end", "repeat",
            "until", "read", "write"};
    private static final String[] SYMBOL = {"+", "-", "*", "/", "=", "<", "(", ")", ";", ":="};

    public static void main(String[] args) {
        Lexer lexer = new Lexer();
        lexer.inpProgram();
        for (String s : lexer.inp
        ) {
            System.out.println(s);
        }
    }
}
