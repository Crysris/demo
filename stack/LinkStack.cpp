#include "../LinkList/LinkList.cpp"

template <class T>
class LinkStack
{
private:
    int size;
    ListNode<T> *root;

public:
    LinkStack();
    ~LinkStack();
};