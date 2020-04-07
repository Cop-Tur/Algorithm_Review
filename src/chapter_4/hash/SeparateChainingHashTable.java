package chapter_4.hash;

import com.sun.xml.internal.bind.AnyTypeAdapter;

import java.util.LinkedList;
import java.util.List;

public class SeparateChainingHashTable<AnyType> {
    public SeparateChainingHashTable(){
        this(DEFAULT_TABLE_SIZE);
    }

    public SeparateChainingHashTable(int size){
        theLists = new LinkedList[nextPrime(size)];
        for (int i=0;i<theLists.length;i++)
            theLists[i]=new LinkedList<>();
    }

    public void makeEmpty(){
        for (int i=0; i<theLists.length;i++)
            theLists[i].clear();
        currentSize = 0;
    }

    private static final int DEFAULT_TABLE_SIZE = 101;

    private List<AnyType>[] theLists;
    private int currentSize;
}
