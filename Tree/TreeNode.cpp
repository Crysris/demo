#include <iostream>
#include <cstring>
#include <string>

using namespace std;

template <class T>
class TreeNode
{

private:
    /* data */
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

public:
    TreeNode(int val)
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
    ~TreeNode()
    {
        delete left;
        delete right;
        delete this;
    }
    friend class BSTree;
};
