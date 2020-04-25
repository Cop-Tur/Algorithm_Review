package chapter_7.quicksort;

import static chapter_7.heapsort.HeapSort.swapReferences;
import static chapter_7.insertion_sort.InsertionSort.insertionSort;


public class QuickSort {
    public static <AnyType extends Comparable<? super AnyType>>
    void quicksort(AnyType[] a) {
        quicksort(a, 0, a.length - 1);
    }

    public static <AnyType extends Comparable<? super AnyType>>
    AnyType median3(AnyType[] a, int left, int right) {
        int center = (left + right) / 2;
        if (a[center].compareTo(a[left]) < 0)
            swapReferences(a, center, right - 1);
        if (a[right].compareTo(a[left]) < 0)
            swapReferences(a, left, right);
        if (a[right].compareTo(a[center]) < 0)
            swapReferences(a, center, right);

        swapReferences(a, center, right - 1);
        return a[right - 1];
    }

    private static final int CUTOFF = 3;

    private static <AnyType extends Comparable<? super AnyType>>
    void quicksort(AnyType[] a, int left, int right) {
        if (left + CUTOFF <= right) {
            AnyType pivot = median3(a, left, right);
            int i = left, j = right - 1;
            for (;;){
                while (a[++i].compareTo(pivot)<0){}
                while (a[--i].compareTo(pivot)>0){}
                if (i<j)
                    swapReferences(a,i,j);
                else
                    break;
            }

            swapReferences(a,i,right-1);

            quicksort(a,left,i-1);
            quicksort(a,i+1,right);
        }
        else
            insertionSort(a,left,right);
    }
}
