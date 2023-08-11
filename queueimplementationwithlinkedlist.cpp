#include <iostream>

using namespace std;

struct node {
    int value;
    struct node* next;
};



void enque(struct node** front, struct node** rear, int element) {
    struct node* newnode = new node;
    newnode->value = element;
    newnode->next = NULL;

    if (*rear == NULL) {
        *front = newnode;
        *rear = newnode;
    } else {
        (*rear)->next = newnode;
        *rear = newnode;
    }
}

void printque(struct node* front, struct node* rear) {
    struct node* current = front;
    while (current != NULL) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    cout << "TEST" << endl;
    struct node* front = NULL;
    struct node* rear = NULL;

    enque(&front, &rear, 10);
    enque(&front, &rear, 27);
    enque(&front, &rear, 5);
    enque(&front, &rear, 1);

    printque(front, rear);

    return 0;
}
