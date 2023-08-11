#include <iostream>
using namespace std;

struct Node {
    Node *next;
    int value;
};

class SortedList {
private:
    Node *h = nullptr;

public:
    void addelements(int data) {
        Node *currentNode = h;
        Node *prevNode = nullptr;

        Node *newnode = new Node(); 

        newnode->value = data;
        newnode->next = nullptr;

        if (h == nullptr) {
            h = newnode; 
            return;
        }

        while (currentNode != nullptr) {
            if (currentNode->value > data) {
                if (prevNode == nullptr) {
                    newnode->next = h;
                    h = newnode; 
                } else {
                    prevNode->next = newnode;
                    newnode->next = currentNode; 
                }
                return;
            }
            prevNode = currentNode;
            currentNode = currentNode->next;
        }

        prevNode->next = newnode; 
    }

    void printlist() {
        Node *currentNode = h;
        while (currentNode != nullptr) {
            cout << currentNode->value << " ";
            currentNode = currentNode->next;
        }
        cout << endl;
    }
};

int main() {

    SortedList sortedList;

    sortedList.addelements(5);
    sortedList.addelements(2);
    sortedList.addelements(8);
    sortedList.addelements(3);

    sortedList.printlist();

    return 0;
}
