#include "TreeNode.cpp"

template <class T>
class BSTree
{
private:
    TreeNode<T> *root;
    int length;

public:
    BSTree(int val)
    {
        length = 1;
        root = new TreeNode<T>(val);
    }
    ~BSTree()
    {
        destory(root);
    }
    void destory(TreeNode<T> *node)
    {
        if (node == nullptr)
            return;
        destory(node->left);
        destory(node->right);
    
    }
};