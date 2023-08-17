#include <iostream>

using namespace std;

struct Node{
    Node *right;
    Node *left;
    int value;
};

class Tree{
    private:
    

    public:
    Node *root = new Node;
    Tree(){
        root = nullptr;
    }
    
    void addElements(int newvalue){
        Node *newnode = new Node;
        newnode->left = nullptr;
        newnode->right = nullptr;
        newnode->value = newvalue;

        if (root==nullptr){
            root = newnode;
            return;
        }

        Node *currentNode = root;
        Node *possibleNode = nullptr;
    
    while (currentNode != nullptr) {
        possibleNode = currentNode;

        if (currentNode->value > newvalue) {
            currentNode = currentNode->left;
        } else {
            currentNode = currentNode->right;
        }
    }

    if (possibleNode->value > newvalue) {
        possibleNode->left = newnode;
    } else {
        possibleNode->right = newnode;
    }
    }

    bool contains(int findelement){
        Node *currentNode = root;
        if(root == nullptr){
            return false;
        }
        while (currentNode != nullptr){
            if (currentNode->value==findelement){
                return true;
            }
            if (currentNode->value > findelement){
                currentNode= currentNode->left;
            }
            else{
                currentNode = currentNode->right;
            }
        }
        return false;
    }

    void printElements(Node *temproot){

        if (temproot==nullptr){
            return;    
        }
        cout<< temproot->value << " " ;
        printElements(temproot->left);
        printElements(temproot->right);

    }

};

int main (){
    Tree t1;
    t1.addElements(5);
    t1.addElements(56);
    t1.addElements(66);
    t1.addElements(12);
    t1.addElements(31);
    t1.printElements(t1.root);
    bool containsELem = t1.contains(755);
    cout<<containsELem;


    return 0;
}