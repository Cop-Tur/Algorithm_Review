package chapter_9.shortest_path;

import java.io.BufferedReader;
import java.io.IOException;
import java.nio.Buffer;
import java.util.*;

public class WordLadder {
    //source code see http://users.cis.fiu.edu/~weiss/dsaajava3/code/WordLadder.java
    public static List<String> readWords(BufferedReader in) throws IOException {
        String oneLine;
        List<String> lst = new ArrayList<>();
        while ((oneLine = in.readLine()) != null)
            lst.add(oneLine);
        return lst;
    }

    public static List<String>
    findChain(Map<String, List<String>> adjacentWords, String first, String second) {
        Map<String, String> previousWord = new HashMap<String, String>();
        LinkedList<String> q = new LinkedList<String>();

        q.addLast(first);
        while (!q.isEmpty()) {
            String current = q.removeFirst();
            List<String> adj = adjacentWords.get(current);

            if (adj != null)
                for (String adjWord : adj)
                    if (previousWord.get(adjWord) == null) {
                        previousWord.put(adjWord, current);
                        q.addLast(adjWord);
                    }
        }
        previousWord.put(first, null);
        return getChainFromPreviousMap(previousWord, first, second);
    }

    public static List<String> getChainFromPreviousMap(Map<String, String> prev, String first, String second) {
        LinkedList<String> result = null;
        if (prev.get(second) != null) {
            result = new LinkedList<>();
            for (String str = second; str != null; str = prev.get(str))
                result.addFirst(str);
        }
        return result;
    }
}
