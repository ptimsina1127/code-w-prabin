#include <iostream>
#include <vector>
#define ORDER 3

using namespace std;

class Node{

public:
int numElements;
vector <int> values;
vector <Node*> valuesLink;

Node()
{
    numElements = 0;
        for (int i = 0; i < ORDER; i++) {
            valuesLink.push_back(nullptr);
        }
}

};

class BTree{  
public:  
Node *root;

BTree(){
    root = new Node();
}
void insert(int data){
    Node *currentNode = root;
    while (true ){

    if (currentNode->numElements < ORDER-1){
        for (int i = 0 ; i < currentNode->numElements; ++i){
        if (currentNode->values[i]> data){
            currentNode->values.insert(currentNode->values.begin()+i,data);
            currentNode->numElements++;
            return;
        }
        }
        currentNode->numElements++;
        currentNode->values.push_back(data);
        return;
    }

    else {
        int nodeIndex =-1;
        for (int i = 0 ; i < currentNode->numElements; ++i){
            if (data < currentNode->values[i]){
                nodeIndex = i ;
            }
        }
        if (nodeIndex == -1) {
            nodeIndex = currentNode->numElements;
        }
        
        //if node is alredy formed or not:
        if (currentNode->valuesLink[nodeIndex]== nullptr){
            Node * newNode= new Node();
            currentNode->valuesLink[nodeIndex]= newNode;  
            currentNode = newNode;
        }
        else{
            currentNode = currentNode->valuesLink[nodeIndex];

        }
    }
}

}

void printElements(Node *temproot){
    if (temproot == nullptr){
        return;
    }

    for (int i = 0 ; i < temproot->numElements; ++i){
        cout << temproot->values[i]<<" ";
    }
    cout<<endl;
    for (int i = 0 ; i < ORDER;++i){
        printElements(temproot->valuesLink[i]);
    }
    
}

};


int main (){

    BTree newbtree;
    newbtree.insert(1);
    newbtree.insert(3);
    newbtree.insert(5);
    newbtree.insert(7);
    newbtree.insert(9);
    newbtree.insert(2);
    newbtree.insert(11);
    newbtree.insert(8);
    newbtree.insert(6);
    newbtree.printElements(newbtree.root);

    return 0;
}