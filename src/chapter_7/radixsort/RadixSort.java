package chapter_7.radixsort;

import java.util.ArrayList;

public class RadixSort {
    public static void radixSortA(String[] arr, int stringLen) {
        final int BUCKETS = 256;
        ArrayList<String>[] buckets = new ArrayList[BUCKETS];

        for (int i = 0; i < BUCKETS; i++)
            buckets[i] = new ArrayList<>();
        for (int pos = stringLen - 1; pos >= 0; pos--) {
            for (String s : arr) {
                buckets[s.charAt(pos)].add(s);
            }

            int idx = 0;
            for (ArrayList<String> thisBucket : buckets) {
                for (String s : thisBucket)
                    arr[idx++] = s;

                thisBucket.clear();
            }
        }
    }
}
