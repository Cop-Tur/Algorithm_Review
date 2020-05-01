package chapter_9.shortest_path;

import java.io.BufferedReader;
import java.io.IOException;
import java.nio.Buffer;
import java.util.*;

public class WordLadder {
    public static List<String> readWords(BufferedReader in)throws IOException{
        String oneLine;
        List<String> lst = new ArrayList<>();
        while ((oneLine = in.readLine())!=null)
            lst.add(oneLine);
        return lst;
    }

    public static List<String>
    findChain(Map<String,List<String>> adjacentWords, String first, String second){
        Map<String,String> previousWord = new HashMap<String, String>();
        LinkedList<String> q = new LinkedList<String>();
    }
}
