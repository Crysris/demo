
#include <iostream>

using namespace std;

class Node {
  friend class List;

private:
  int val;
  Node *next;

public:
  Node(int val) : next(nullptr) { this->val = val; }
};

class List {
private:
  Node *root;
  int size;

public:
  void foo() { int val = root->val; }
};

int main() {
  Node *a = new Node(1);
  return 0;
}