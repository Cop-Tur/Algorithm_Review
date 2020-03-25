package chapter_3.binarytree;

public class BinarySearchTree<AnyType extends Comparable<? super AnyType>> {
    private static class BinaryNode<AnyType>{
        BinaryNode(AnyType theElement){
            this(theElement,null,null);
        }
        BinaryNode(AnyType theElement,BinaryNode<AnyType> lt,BinaryNode<AnyType> rt){
            element=theElement;
            left=lt;
            right=rt;
        }
        AnyType element;
        BinaryNode<AnyType> left;
        BinaryNode<AnyType> right;
    }

    private BinaryNode<AnyType> root;

    public BinarySearchTree(){
        root=null;
    }
    public void makeEmpty(){
        root=null;
    }


    public boolean contains(AnyType x,BinaryNode<AnyType> t){
        if (t==null)
            return false;
        int compareResult = x.compareTo(t.element);
        if (compareResult<0)
            return contains(x,t.left);
        else if (compareResult>0)
            return contains(x,t.right);
        else
            return true;
    }
}
