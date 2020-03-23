package chapter_3.binarytree;

public class BinaryNode<AnyType> {
    //二叉树
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
