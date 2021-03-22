#include "ListNode.cpp"
template <class T>
class LinkList
{
private:
    ListNode<T> *head;
    int length;

public:
    int getLength() { return length; }
    LinkList() : head(nullptr), length(0)
    {
    }
    LinkList(ListNode<T> *node);
    LinkList(LinkList<T> *list);

    ~LinkList()
    {
        ListNode<T> *p;
        while (head != nullptr)
        {
            p = head;
            head = head->getNext();
            p->destory();
        }
        delete this;
    }
    ListNode<T> *getHead() { return head; }
    void push_back(ListNode<T> *node);
    ListNode<T> *pop_back();
    void insertByK(int k, ListNode<T> *node);
    ListNode<T> *findKthNode(int k);
    void printList();
    void reverse();
};
template <class T>
LinkList<T>::LinkList(ListNode<T> *node)
{
    if (node == nullptr)
        return;
    head = node;
    length = 1;
}
template <class T>
LinkList<T>::LinkList(LinkList<T> *list)
{
    if (list == nullptr)
        return;
    ListNode<T> *p = list->getHead();
    ListNode<T> *q = head;
    while (p != nullptr)
    {
        q = p;
        q = q->next;
        p = p->next;
        length++;
    }
}
template <class T>
void LinkList<T>::push_back(ListNode<T> *node)
{
    if (node == nullptr)
        throw "Empty Node Error!";
    if (length == 0)
    {
        head = node;
        length++;
        return;
    }
    ListNode<T> *p = findKthNode(length);
    length++;
    p->setNext(node);
    node->setNext(nullptr);
}
template <class T>
ListNode<T> *LinkList<T>::pop_back()
{
    if (length == 0)
        throw "Empty List Error!";
    if (length == 1)
    {
        ListNode<T> *p = head;
        head = nullptr;
        length = 0;
        return p;
    }
    int i = 1;
    ListNode<T> *p = head, *q;
    while (i != length - 1)
    {
        i++;
        p = p->getNext();
    }
    length--;
    q = p->getNext();
    p->setNext(nullptr);
    return q;
}
// inert node into the i+1 node position
template <class T>
void LinkList<T>::insertByK(int k, ListNode<T> *node)
{
    if (node == nullptr)
        throw "Empty Node Error!";
    if (length == 0)
    {
        length++;
        head = node;
        return;
    }
    if (k < 0 || k == 0 || k > length)
        throw "Wrong k error!";
    ListNode<T> *p = head;
    while (--k)
    {
        p = p->getNext();
    }
    node->setNext(p->getNext());
    p->setNext(node);
    length++;
}
template <class T>
ListNode<T> *LinkList<T>::findKthNode(int k)
{
    if (k < 0 || k == 0 || k > length || length == 0)
        return nullptr;
    ListNode<T> *p = head;
    k--;
    while (k)
    {
        p = p->getNext();
        k--;
    }
    return p;
}
template <class T>
void LinkList<T>::printList()
{
    ListNode<T> *p = head;
    while (p != nullptr)
    {
        cout << p->getVal() << " ";
        p = p->getNext();
    }
    cout << endl;
}
template <class T>
void LinkList<T>::reverse()
{
    if (length == 0 || length == 1)
        return;
    ListNode<T> *p = head, *q = head->getNext(), *r = nullptr;
    while (p != nullptr && q != nullptr)
    {
        p->setNext(r);
        r = p;
        p = q;
        q = q->getNext();
        p->setNext(r);
    }
    head = p;
}
