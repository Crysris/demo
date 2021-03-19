#include "../LinkList/ListNode.h/"

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