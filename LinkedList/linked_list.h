#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

class LinkedList
{
    private:
     Node* head;

    public:
     LinkedList() {
        head = nullptr;
     }

     void AddDataToFront(int n);

     void AddDataToEnd(int n);

     void AddNodeToFront(Node& node);

     void AddNodeToEnd(Node& node);

     void AddNodeAfterNode(int n);
};

struct Node
{
    int data;
    Node* next;
};

#endif  // LINKED_LIST_H_
