package chapter_7.quicksort;

import static chapter_7.heapsort.HeapSort.swapReferences;
import static chapter_7.insertion_sort.InsertionSort.insertionSort;
import static chapter_7.quicksort.QuickSort.median3;
import static chapter_7.quicksort.QuickSort.quicksort;

public class QuickSelect {
    //根据快速排序原理实现快速选择 在平均运行时间O(N)找到第k个最大(或最小)元
    public static <AnyType extends Comparable<? super AnyType>>
    void quickSelect(AnyType [] a,int left,int right,int k){
        if (left + CUTOFF <= right){
            AnyType pivot = median3(a,left,right);

            //Begin partitioning
            int i = left,j = right - 1;
            for (;;){
                while (a[++i].compareTo(pivot)<0){}
                while (a[--j].compareTo(pivot)>0){}
                if (i<j)
                    swapReferences(a,i,j);
                else
                    break;
            }
            swapReferences(a,i,right-1); //Restore pivot

            if (k<=i)
                quickSelect(a,left,i-1,k);
            else if (k>i+1)
                quickSelect(a,i+1,right,k);
        }
        else
            insertionSort(a,left,right);
    }
    private static final int CUTOFF = 3;
}
