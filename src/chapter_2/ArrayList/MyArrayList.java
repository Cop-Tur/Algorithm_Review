package chapter_2.ArrayList;

public class MyArrayList <AnyType> implements Iterable<AnyType> {
    //ArrayList泛型类实现
    private static final int DEFAULT_CAPACITY=10;

    private int theSize;
    private AnyType [] theItems;

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
        return theItems[idx];
    }

    public AnyType set(int idx,AnyType newVal){
        if (idx<0 || idx>=size())
            throw new ArrayIndexOutOfBoundsException();
        AnyType old = theItems[idx];
        theItems[idx]=newVal;
        return old;
    }

    public void ensureCapacity(int newCapacity){
        if (newCapacity < theSize)
            return;
        AnyType[] old = theItems;
        theItems = (AnyType []) new Object[newCapacity];
        if (size() >= 0) System.arraycopy(old, 0, theItems, 0, size());
    }
    public boolean add(AnyType x){
        add(size(),x);
        return true;
    }

    public void add(int idx,AnyType x){
        if (theItems.length==size())
            ensureCapacity(size()*2+1);
        for (int i=theSize;i>idx;i--)
            theItems[i]=theItems[i-1];
        theItems[idx]=x;
        theSize++;
    }

}
