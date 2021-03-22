#include <cstring>
#include <iostream>
#include <string>
using namespace std;

template <class T>
class ListNode {
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
};