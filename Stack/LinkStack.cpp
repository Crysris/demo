<<<<<<< HEAD
#include "LinkStack.h"

template <class T>
class LinkStack {
 private:
  int size;
  ListNode<T> *root;

 public:
  LinkStack() : size(0), root(nullptr) {}
  ~LinkStack();
  void push(ListNode<T> *node);
  void pop(T element);
  ListNode<T> *findKthNode(int k);
};

template <class T>
LinkStack<T>::~LinkStack() {
  ListNode<T> *p = root;
  if (root == nullptr) return;
  while (p != nullptr) {
    root = p->next;
    delete p;
    p = p->next;
  }
  delete root;
}

template <class T>
void LinkStack<T>::push(ListNode<T> *node) {
  if (node == nullptr) throw "empty node error!!";

  if (size == 0) {
    root = node;
    size = 1;
    return;
  }
  ListNode<T> *p = findKthNode(size);
  p->next = node;
  size++;
}

template <class T>
void LinkStack<T>::pop(T element) {
  if (size == 0) throw "empty stack error!!";
  if (size == 1) {
    root = nullptr;
    size = 0;
    return;
  }
  ListNode<T> *p = findKthNode(size - 1);
  ListNode<T> *q = p->next;
  element = q->val;
  delete q;
  p->next = nullptr;
  size--;
}
