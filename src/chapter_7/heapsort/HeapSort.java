package chapter_7.heapsort;

public class HeapSort {
    private static int leftChild(int i){
        return 2 * i + 1;
    }

    private static <AnyType extends Comparable<? super AnyType>>
    void percDown(AnyType [] a,int i,int n){
        int child;
        AnyType tmp;
        for (tmp = a[i]; leftChild(i)<n;i=child){//i = child 使得每次替换后子树都能进行递归替换
            child = leftChild(i);
            if (child != n-1 && a[child].compareTo(a[child+1])<0)
                child++;
            if (tmp.compareTo(a[child])<0)
                a[i] = a[child];
            else
                break;
        }
        a[i] = tmp;
    }

    public static <AnyType extends Comparable<? super AnyType>>
    void heapsort(AnyType [] a){
        for (int i = a.length/2 - 1;i>=0;i--) //build heap
            percDown(a,i,a.length);
        for (int i = a.length - 1;i > 0;i--){ //deleteMax
            swapReferences(a,0,i);//树根与最后的叶子交换，即将最大数放到最后
            percDown(a,0,i);
        }
    }

    public static <AnyType> void swapReferences(AnyType [] a,int index1,int index2){
        AnyType tmp = a[index1];
        a[index1] = a[index2];
        a[index2] = tmp;
    }
}
