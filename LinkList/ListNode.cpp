
#include "ListNode.h"

template <class T>
ListNode<T>::ListNode(T val) {
  this->val = val;
  this->next = nullptr;
}
template <class T>
ListNode<T>::ListNode(T val, ListNode<T> *next) {
  this->val = val;
  this->next = next;
}
template <class T>
ListNode<T> *ListNode<T>::createNode(T val) {
  return new ListNode(val);
}
template <class T>
ListNode<T> *ListNode<T>::createNode(T val, ListNode *next) {
  return new ListNode(val, next);
}
template <class T>
void ListNode<T>::destory() {
  delete this->next;
  delete this;

