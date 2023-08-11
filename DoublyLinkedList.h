#ifndef DoublyLinkedList_H
#define DoublyLinkedList_H

class DoublyLinkedList{
  
private:
struct Node {
    Node *nextNode;
    Node *prevNode;
    int Value;
};
Node *head; 
Node *tail;

public:
DoublyLinkedList();
void addElement(int x);

void printElements();
};

#endif