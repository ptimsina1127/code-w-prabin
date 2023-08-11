#include <iostream>
#include "DoublyLinkedList.h"


DoublyLinkedList::DoublyLinkedList(){
     head = nullptr;
     tail = nullptr;   
    }

void DoublyLinkedList::addElement(int x){
    Node *newnode = new Node();
    newnode->Value=x;
    newnode->nextNode= nullptr;
    newnode->prevNode = nullptr;
    
    if (head == nullptr){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->prevNode = tail;
    tail->nextNode= newnode;
    tail = newnode; 
}
void DoublyLinkedList::printElements(){
Node *currentNode =head;
while (currentNode!=nullptr){
    std::cout<<currentNode->Value <<" ";
    currentNode= currentNode->nextNode;
} 
}

int main (){
DoublyLinkedList classobj;
classobj.addElement(54);
classobj.addElement(5);
classobj.addElement(314);
classobj.addElement(14);
classobj.addElement(39);
classobj.addElement(12);
classobj.printElements();

    return 0;
}