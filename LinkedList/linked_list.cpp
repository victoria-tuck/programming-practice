#include <stdexcept>
#include "linked_list.h"

LinkedList::LinkedList()
{
    _head = nullptr;
}

LinkedList::LinkedList(Node* head)
{
    _head = head;
}

int LinkedList::GetDataAtIndex(uint8_t index)
{
    Node* current_node = _head;
    for (int i; i < index; i++)
    {
        if (current_node == nullptr)
        {
            throw std::invalid_argument( "List does not contain index given." );
        } else
        {
            current_node = current_node->next;
        }
    }

    if (current_node != nullptr)
    {
        return current_node->data;
    } else 
    {
        throw std::invalid_argument( "List does not contain index given." );
    }
}
