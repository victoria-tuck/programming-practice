#include <iostream>
#include "linked_list.h"

int main ()
{
    LinkedList mylist;
    try 
    {
        int data = mylist.GetDataAtIndex(0);
        std::cout << data << std::endl;
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Here" << std::endl;

    return 0;
}
