//
// Created by dubeyatharva on 6/27/19.
//

#include <bits/stdc++.h>
#include "LinkedList.h"

node* LinkedList::createList(int size)
{
    node* list[size];
    for(int i =0; i< size; i++)
    {
        list[i] = new node;
        std::cout<<"Enter " << i+1 <<" node";
        std::cin>>list[i]->data;
        list[i]->next = nullptr;
    }
    linkList(list,size);
    return list[0];
}

void LinkedList ::addElement( node* first)
{
    int position;
    node* temp = first;
    printList(first);
   std::cout<<"Enter the index of the node after which the data has to be added";
   std::cin>>position;
   for(int i = 0; i< position; i++ )
   {
       if (i != position-1)
           temp = temp->next;
       else{
           node* addNode = new node;
           std::cout<<"Enter Data";
           std::cin>>addNode->data;
           addNode->next = temp->next;
           temp->next = addNode;
           printList(first);
       }

   }
}

void LinkedList::removeElement(node* first)
{
    int position;
    node* temp = first;
    node* prev;
    std::cout<<"Enter the position of the Node which has to be deleted";
    printList(first);
    std::cin>>position;
    for (int i = 0; i <position ; ++i)
    {
        if(i != position-1) {
            prev = temp;
            temp = temp->next;
        }
        else
        {
            prev->next = temp->next;
            delete(temp);
            printList(first);
        }
    }
}

void LinkedList::linkList(node *List[], int size)
{
    for (int i = 0; i <size ; ++i)
    {
        if(i == size -1) {
            List[i]->next = nullptr;
        } else
        List[i]->next = List[i+1];
    }
}

void LinkedList::printList(node* first)
{
    int i =1;
    node* temp;
    temp = first;
    while (temp)
    {
        std::cout<<"i " <<temp->data<<std::endl;
        temp = temp->next;
        i++ ;
    }
}
