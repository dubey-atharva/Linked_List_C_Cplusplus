#include <iostream>
#include "LinkedList.h"

int main()
{
    int size;
    std::cout<<"Enter Size";
    std::cin>>size;
    LinkedList list;
    node * first =  list.createList(size);
    std::cout<<"PrintingList"<<std::endl;
    list.printList(first);
    list.addElement(first);
    list.removeElement(first);
}