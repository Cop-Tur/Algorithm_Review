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

    public void insert(AnyType x){
        List<AnyType> whichList = theLists[myhash(x)];
        if (!whichList.contains(x)){
            whichList.add(x);

            if (++currentSize > theLists.length)
                rehash();
        }
    }

    private static final int DEFAULT_TABLE_SIZE = 101;

    private List<AnyType>[] theLists;
    private int currentSize;

    private int myhash(AnyType x){
        int hashVal = x.hashCode();
        hashVal %=theLists.length;
        if (hashVal < 0)
            hashVal += theLists.length;
        return hashVal;
    }
}
