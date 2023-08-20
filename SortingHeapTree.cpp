#include <iostream>
#define ARRAY_SIZE 30
using namespace std;

class MaxHeap{

private:
public:
int arr[30];
int arrpos;

MaxHeap(){
 arrpos= -1;   
}
void addElements(int elems);
void printElements();
int deleteElements();


};

void MaxHeap:: addElements(int elems){
    arrpos++;
    arr[arrpos] = elems;
    
    int currentpos = arrpos;
    while (currentpos != 0 ){       
        int parentpos = (currentpos-1)/2;

        if ( arr[parentpos]< arr[currentpos]){
        int temp = arr[currentpos];
        arr[currentpos] = arr[parentpos];
        arr[parentpos] = temp;
        }

        currentpos = parentpos;
    }
} 
void MaxHeap::printElements(){
    for (int i = 0 ; i <= arrpos; ++i){
        cout << arr [i]<< " " ; /// Printing in pre Order
    }
}

int MaxHeap:: deleteElements(){
    int removed_element = arr[0];
    arr[0] = arr[arrpos];
    arrpos--;
    int parent_index = 0;
    int child_index = 1;
    

    while(true){

        
        int left_child = 2 * parent_index + 1;
        int right_child = 2 * parent_index + 2;
        
        if (left_child >= ARRAY_SIZE ) {
            return removed_element;
        }
        if ( (arr[2 * parent_index +1] <= arr[parent_index]) 
            && (arr[2 * parent_index +2] <= arr[parent_index]) ){
            return removed_element;
        }
        if (arr[left_child] > arr[parent_index]){
            swap(arr[left_child],arr[parent_index]);
        }
        else {
            swap(arr[right_child],arr[parent_index]);
        }
    }
}

int main (){
    MaxHeap t1;
    t1.addElements(5);
    t1.addElements(56);
    t1.addElements(66);
    t1.addElements(12);
    t1.addElements(31);
    t1.printElements();
    cout <<endl;
    for (int i = 0 ; i < 5 ; ++i){
    int max_Num = t1.deleteElements();
    cout << max_Num <<endl;
    }
    //t1.printElements();
    

// Delete Garne 
// Search Garne
//Linked list bata implement garne 
//Heap Sort 
    return 0;
}