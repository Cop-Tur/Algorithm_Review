package chapter_3.binarytree;

public class AvlNode<AnyType> {

    AnyType element;
    AvlNode<AnyType> left;
    AvlNode<AnyType> right;
    int height;

    AvlNode(AnyType theElement) {
        this(theElement, null, null);
    }

    AvlNode(AnyType theElement, AvlNode<AnyType> lt, AvlNode<AnyType> rt) {
        element = theElement;
        left = lt;
        right = rt;
        height = 0;
    }
}
