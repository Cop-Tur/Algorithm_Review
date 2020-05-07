package chapter_final_Advanced_data_structure;

public class RedBlackTree<AnyType extends Comparable<? super AnyType>> {
    private static class RedBlackNode<AnyType> {
        AnyType element;
        RedBlackNode<AnyType> left;
        RedBlackNode<AnyType> right;
        int color;

        RedBlackNode(AnyType theElement) {
            this(theElement, null, null);
        }

        RedBlackNode(AnyType theElement, RedBlackNode<AnyType> lt, RedBlackNode<AnyType> rt) {
            element = theElement;
            left = lt;
            right = rt;
            color = RedBlackTree.BLACK;
        }
    }

    private RedBlackNode<AnyType> header;
    private RedBlackNode<AnyType> nullNode;

    private static final int BLACK = 1;
    private static final int RED = 0;

    public RedBlackTree() {
        nullNode = new RedBlackNode<>(null);
        nullNode.left = nullNode.right = nullNode;
        header = new RedBlackNode<>(null);
        header.left = header.right = nullNode;
    }
}
