#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

class Node
{
    public:
     int data;
     Node* next;
};

class LinkedList
{
    private:
     Node* _head;

    public:
     LinkedList();
     LinkedList(Node* head);

     int GetDataAtIndex(uint8_t index);

    //  void AddDataToFront(int n);

    //  void AddDataToEnd(int n);

    //  void AddNodeToFront(Node& node);

    //  void AddNodeToEnd(Node& node);

    //  void AddNodeAfterNode(int n);
};

#endif  // LINKED_LIST_H_
