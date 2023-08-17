#include <iostream>

using namespace std;

struct Node{
Node *next;
int value;
};

class LinkedList{
    private:
    

    public:
    Node  *head = nullptr;
    void insertElements(int elem){
        Node *newnode = new Node;
        newnode->value = elem;
        newnode->next = nullptr;

        if (head == nullptr){
            head = newnode;
        }
        else{
            Node *currentNode = head;
            while (currentNode->next!= nullptr){
                currentNode = currentNode->next;
            }
            currentNode->next = newnode;
        }
    }
    void printFunction(){
        Node *currentNode = head;
        while (currentNode!=nullptr){
            cout<<currentNode->value;
            currentNode = currentNode->next;
        }
    }

    Node *reverseFunction(Node *temphead){
        if (temphead->next==nullptr){
            //head = temphead;
            return temphead;
        }
        Node *remaining = reverseFunction(temphead->next);
       // remaining->next = temphead;
        temphead->next->next = temphead;
        temphead->next= nullptr;
        return remaining;
    }


};

int main (){

    LinkedList link;
    link.insertElements(5);
    link.insertElements(7);
    link.insertElements(2);
    link.insertElements(9);
    link.printFunction();
    cout<<endl;
    LinkedList link2;
    link2.head = link.reverseFunction(link.head);
    link2.printFunction();
    return 0;
}