package chapter_3.binarytree;

public class AvlTree<AnyType extends Comparable<? super AnyType>> {
    private static class AvlNode<AnyType> {
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


    private int height(AvlNode<AnyType> t) {
        return t == null ? -1 : t.height;
    }

    private AvlNode<AnyType> insert(AnyType x,AvlNode<AnyType> t){
        if (t==null){
            return new AvlNode<>(x);
        }

        int compareResult=x.compareTo(t.element);

        if (compareResult>0){
            t.right=insert(x,t.right);
        }else if (compareResult<0)
            t.left=insert(x,t.left);
        return balance(t);
    }

    private AvlNode<AnyType> balance(AvlNode<AnyType> t){

    }
}
