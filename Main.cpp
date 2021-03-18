#include "LinkList/LinkList.cpp"
#include "Tree/BSTree.cpp"
#include

int main()
{
    /*ListNode<int> *a = ListNode<int>::createNode(3);
    ListNode<int> *b = ListNode<int>::createNode(4);
    ListNode<int> *c = ListNode<int>::createNode(5);
    a->setNext(b);
    b->setNext(c);
    c->setNext(a);
    for (int i = 0; i < 10; i++)
    {
        cout << a->getVal() << endl;
        a = a->getNext();
    }
    a->destory();
    b->destory()
    c->destory();*/

    /*const int N = 100;
    const int MAX = 200; // node[1-200]
    const int L = 20;
    string nodeName[MAX];
    ListNode<int> *node[MAX];
    for (int i = 1; i <= N; i++)
    {
        nodeName[i] = "node" + to_string(i);
        node[i] = ListNode<int>::createNode(i);
    }
    LinkList<int> *list1 = new LinkList<int>();

    //list1  node[1-20]
    for (int i = 1; i <= L; i++)
    {
        list1->push_back(node[i]);
    }
    list1->printList();
    list1->reverse();
    list1->printList();

    //for (int i = 1; i <= N; i++)
    //    node[i]->destory();
    //delete list1;*/

    return 0;
}
