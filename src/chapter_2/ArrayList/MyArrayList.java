package chapter_2.ArrayList;

public class MyArrayList <AnyType> implements Iterable<AnyType> {
    //ArrayList泛型类实现
    private static final int DEFAULT_CAPACITY=10;

    private int theSize;
    private AnyType [] theIems;

    public MyArrayList(){
        doClear();
    }

    public void clear(){
        doClear();
    }

    private void doClear(){
        theSize=0;
        ensureCapacity(DEFAULT_CAPACITY);
    }

    public int size(){
        return theSize;
    }
    public boolean isEmpty(){
        return size()==0;
    }
    public void trimToSize(){
        ensureCapacity(size());
    }

    public AnyType get(int idx){
        if (idx<0 || idx >=size())
            throw new ArrayIndexOutOfBoundsException();
        return theIems[idx];
    }

    public AnyType set(int idx,AnyType newVal){
        if (idx<0 || idx>=size())
            throw new ArrayIndexOutOfBoundsException();
        AnyType old = theIems[idx];
        theIems[idx]=newVal;
        return old;
    }

}
