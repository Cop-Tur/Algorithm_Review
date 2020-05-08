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

    private RedBlackNode<AnyType> current;
    private RedBlackNode<AnyType> parent;
    private RedBlackNode<AnyType> grand;
    private RedBlackNode<AnyType> great;


    public RedBlackTree() {
        nullNode = new RedBlackNode<>(null);
        nullNode.left = nullNode.right = nullNode;
        header = new RedBlackNode<>(null);
        header.left = header.right = nullNode;
    }

    private RedBlackNode<AnyType> rotate(AnyType item,RedBlackNode<AnyType> parent){
        if (compare(item,parent) < 0)
            return parent.left = compare(item,parent.left)<0?
                    rotateWithLeftChild(parent.left):
                    rotateWithRightChild(parent.left);
        else
            return parent.right = compare(item,parent.right)<0?
                    rotateWithLeftChild(parent.right):
                    rotateWithRightChild(parent.right);
    }

    private final int compare(AnyType item,RedBlackNode<AnyType> t){
        if (t == header)
            return 1;
        else
            return item.compareTo(t.element);
    }

    public void insert( AnyType item )
    {
        current = parent = grand = header;
        nullNode.element = item;

        while( compare( item, current ) != 0 )
        {
            great = grand; grand = parent; parent = current;
            current = compare( item, current ) < 0 ?
                    current.left : current.right;

            // Check if two red children; fix if so
            if( current.left.color == RED && current.right.color == RED )
                handleReorient( item );
        }

        // Insertion fails if already present
        if( current != nullNode )
            return;
        current = new RedBlackNode<>( item, nullNode, nullNode );

        // Attach to parent
        if( compare( item, parent ) < 0 )
            parent.left = current;
        else
            parent.right = current;
        handleReorient( item );
    }

    public void remove( AnyType x )
    {
        throw new UnsupportedOperationException( );
    }

    public AnyType findMin( )
    {
        if( isEmpty( ) )
            try {
                throw new Exception();
            } catch (Exception e) {
                e.printStackTrace();
            }

        RedBlackNode<AnyType> itr = header.right;

        while( itr.left != nullNode )
            itr = itr.left;

        return itr.element;
    }

    public AnyType findMax( )
    {
        if( isEmpty( ) )
            try {
                throw new Exception();
            } catch (Exception e) {
                e.printStackTrace();
            }

        RedBlackNode<AnyType> itr = header.right;

        while( itr.right != nullNode )
            itr = itr.right;

        return itr.element;
    }

    public boolean contains( AnyType x )
    {
        nullNode.element = x;
        current = header.right;

        for( ; ; )
        {
            if( x.compareTo( current.element ) < 0 )
                current = current.left;
            else if( x.compareTo( current.element ) > 0 )
                current = current.right;
            else if( current != nullNode )
                return true;
            else
                return false;
        }
    }

    public void makeEmpty( )
    {
        header.right = nullNode;
    }

    public void printTree( )
    {
        if( isEmpty( ) )
            System.out.println( "Empty tree" );
        else
            printTree( header.right );
    }

    private void printTree( RedBlackNode<AnyType> t )
    {
        if( t != nullNode )
        {
            printTree( t.left );
            System.out.println( t.element );
            printTree( t.right );
        }
    }

    public boolean isEmpty( )
    {
        return header.right == nullNode;
    }

    private void handleReorient( AnyType item )
    {
        // Do the color flip
        current.color = RED;
        current.left.color = BLACK;
        current.right.color = BLACK;

        if( parent.color == RED )   // Have to rotate
        {
            grand.color = RED;
            if( ( compare( item, grand ) < 0 ) !=
                    ( compare( item, parent ) < 0 ) )
                parent = rotate( item, grand );  // Start dbl rotate
            current = rotate( item, great );
            current.color = BLACK;
        }
        header.right.color = BLACK; // Make root black
    }

    /**
     * Rotate binary tree node with left child.
     */
    private RedBlackNode<AnyType> rotateWithLeftChild( RedBlackNode<AnyType> k2 )
    {
        RedBlackNode<AnyType> k1 = k2.left;
        k2.left = k1.right;
        k1.right = k2;
        return k1;
    }

    /**
     * Rotate binary tree node with right child.
     */
    private RedBlackNode<AnyType> rotateWithRightChild( RedBlackNode<AnyType> k1 )
    {
        RedBlackNode<AnyType> k2 = k1.right;
        k1.right = k2.left;
        k2.left = k1;
        return k2;
    }


}
