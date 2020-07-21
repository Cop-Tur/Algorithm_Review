public class Test<AnyType extends Comparable<? super AnyType>> {
    AnyType a;
    AnyType b;
	String c;
	int[] d;

    public Test(AnyType a, AnyType b) {
        this.a = a;
        this.b = b;
    }

    public AnyType findMax() {
        if (a.compareTo(b) > 0)
            return a;
        else
            return b;
    }

    public AnyType findMin() {
        return a.compareTo(b) > 0 ? b : a;
    }

    public static void main(String[] args) {
		String a = new String("asdas");
		String b = new String("sdsd");
        Test test = new Test(a,b);
		
        System.out.println(test.findMax());
    }
}

class Test2 extends Test {
	int temp =5;
	public int p(){
		while(temp>0){
			temp = temp - 1;
		}
		return temp;
	}
}
