package chapter_1.generics;


//简单的泛型类
public class GenericMemoryCell<AnyType> {
    private AnyType storedValue;

    public AnyType read() {
        return storedValue;
    }

    public void write(AnyType storedValue) {
        this.storedValue = storedValue;
    }
}
