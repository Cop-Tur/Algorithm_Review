package chapter_1.generics;

import java.util.Collection;
//Wildcard通配符

/*假设Shape类含有area，而Circle和Square是继承Shape的类
totalArea计算面积总和*/

//使用通配符的totalArea方法可以接收Collection<Square>和Collection<Circle>
public class Wildcard {
    public static double totalArea(Collection<? extends Shape> areaCollection) {
        double total = 0;

        for (Shape s : areaCollection) {
            if (s != null)
                total += s.getArea();
        }

        return total;
    }
}
