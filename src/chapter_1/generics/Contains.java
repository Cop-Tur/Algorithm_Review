package chapter_1.generics;

//泛型方法
public class Contains {
    //泛型static方法实现搜索数组
    public static <AnyType> boolean contains(AnyType[] arr, AnyType x) {
        for (AnyType val : arr) {
            if (x.equals(val))
                return true;
        }
        return false;
    }
}
