package chapter_3.binarytree;

import org.omg.CORBA.Any;

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
    public boolean isEmpty(){
        return root == null;
    }

    public boolean contains(AnyType x){
        return contains(x,root);
    }


    private boolean contains(AnyType x, BinaryNode<AnyType> t){
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
    private BinaryNode<AnyType> findMin(BinaryNode<AnyType> t){
        if (t == null)
            return null;
        else if (t.left == null)
            return t;
        return findMin(t.left);
    }
    private BinaryNode<AnyType> findMax(BinaryNode<AnyType> t){
        if (t != null)
            while (t.right!=null)
                t=t.right;
        return t;
    }

}
