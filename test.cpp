
#include <iostream>

using namespace std;


class State {
 public:
  State *next;
  State *pre;
  int pos;
  State(int pos) {
    this->pos = pos;
    this->next = nullptr;
    this->pre = nullptr;
  } 
};

int main() {
  State *a = new State(1);
  State *b = new State(2);
  a->next = b;
  b->pre = a;
  a = b;

  return 0;
}