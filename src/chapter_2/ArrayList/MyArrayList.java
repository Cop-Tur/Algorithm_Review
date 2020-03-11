package chapter_2.ArrayList;

public class MyArrayList <AnyType> implements Iterable<AnyType> {
    //ArrayList泛型类实现
    private static final int DEFAULT_CAPACITY=10;

    private int theSize;
    private AnyType [] theIems;
}
