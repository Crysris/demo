#include "ListNode.h"

template <class T>
class LinkList {
 private:
  ListNode<T> *head;
  int length;

 public:
  LinkList();
  LinkList(ListNode<T> *node);
  LinkList(LinkList<T> *list);

  ~LinkList();
  void push_back(ListNode<T> *node);
  ListNode<T> *pop_back();
  void insertByK(int k, ListNode<T> *node);
  ListNode<T> *findKthNode(int k);
  void printList();
  void reverse();
};