//
// Created by dubeyatharva on 6/27/19.
//

#ifndef PRAJJ_DSA_LINKEDLIST_H
#define PRAJJ_DSA_LINKEDLIST_H

struct linkNode
{
    int data;
    linkNode* next;
};

typedef  linkNode node;

class LinkedList
        {

public: node* createList(int size);

public:void addElement(node* first);

public:void removeElement(node* first);

private:void linkList(node* List[], int size);

public: void printList(node* first);
};


#endif //PRAJJ_DSA_LINKEDLIST_H
