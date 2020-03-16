package chapter_2.LinkedList;

public class MyLinkedList<AnyType> {
    private int theSize;
    private int modCount=0;
    private Node<AnyType> beginMarker;
    private Node<AnyType> endMarker;

    private static class Node<AnyType>{
        //因为嵌套类Node是私有的，所以其成员可以声明public
        public Node(AnyType d, Node<AnyType> p,Node<AnyType> n){
            data=d; prev=p; next=n;
        }

        public AnyType data;
        public Node<AnyType> prev;
        public Node<AnyType> next;
    }

    public MyLinkedList(){
        doClear();
    }
    public void clear(){
        doClear();
    }

    private void doClear() {
        beginMarker = new Node<AnyType>(null,null,null);
        endMarker = new Node<AnyType>(null,beginMarker,null);
        beginMarker.next=endMarker;

        theSize=0;
        modCount++;
    }
    public int size(){
        return theSize;
    }
    public boolean isEmpty(){
        return size() == 0;
    }

    public boolean add(AnyType x){
        add(size(),x);
        return true;
    }
    public void add(int idx,AnyType x){
        addBefore(getNode(idx,0,size()),x);
    }

}
