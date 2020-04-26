package chapter_9.shortest_path;

import java.io.BufferedReader;
import java.io.IOException;
import java.nio.Buffer;
import java.util.ArrayList;
import java.util.List;

public class WordLadder {
    public static List<String> readWords(BufferedReader in)throws IOException{
        String oneLine;
        List<String> lst = new ArrayList<>();
        while ((oneLine = in.readLine())!=null)
            lst.add(oneLine);
        return lst;
    }
}
