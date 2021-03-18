#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class LinkStack;
template <class T>
class ListNode
{
    friend class LinkStack;

private:
    /* data */
    T val;
    ListNode<T> *next;

protected:
    ListNode(T val);
    ListNode(T val, ListNode<T> *next);
    ~ListNode(){};

public:
    static ListNode<T> *createNode(T val);
    static ListNode<T> *createNode(T val, ListNode<T> *next);
    void destory();
    T getVal();
    void setVal(T val);
    ListNode<T> *getNext();
    void setNext(ListNode<T> *next);
};
template <class T>
ListNode<T>::ListNode(T val)
{
    this->val = val;
    this->next = nullptr;
}
template <class T>
ListNode<T>::ListNode(T val, ListNode<T> *next)
{
    this->val = val;
    this->next = next;
}
template <class T>
ListNode<T> *ListNode<T>::createNode(T val)
{
    return new ListNode(val);
}
template <class T>
ListNode<T> *ListNode<T>::createNode(T val, ListNode *next)
{
    return new ListNode(val, next);
}
template <class T>
void ListNode<T>::destory()
{
    delete this->next;
    delete this;
}
template <class T>
T ListNode<T>::getVal()
{
    return this->val;
}
template <class T>
void ListNode<T>::setVal(T val)
{
    this->val = val;
}
template <class T>
ListNode<T> *ListNode<T>::getNext()
{
    return this->next;
}
template <class T>
void ListNode<T>::setNext(ListNode *next)
{
    this->next = next;
}
