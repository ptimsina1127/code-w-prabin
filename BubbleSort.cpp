#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector <int> vect1){
    for (int i = 0 ; i < vect1.size()-1 ; ++i ){
        for (int j = 0 ; j < vect1.size()- i- 1; ++j){
            if(vect1[j]>vect1[j+1]){
                swap(vect1[j],vect1[j+1]);
            }
        }
    }
    return vect1;
}

vector <int> selectionSort(vector <int> vect1){
    for (int i = vect1.size()-1 ; i > 0 ; --i){
        int max_index = 0;
        for (int j = 0 ; j <= i; ++j){
            if (vect1[j] > vect1[max_index]){
                max_index = j;
            }
        }
        swap (vect1[i], vect1[max_index]);
    } 
    return vect1; 
}

vector <int> insertionSort (vector <int> vect1){
    for (int i = 1 ; i < vect1.size(); ++i){
        int hold = vect1[i];
        for (int j = i-1; j >= 0 ; --j){
            if (hold < vect1[j]){
                vect1[j+1] = vect1[j];
                vect1[j] =hold;
            }
        }

    }
    return vect1;
}



int partition(vector <int> &vect1, int low, int high){
    int pivot_element = vect1[high];
    int less_index = low-1;
    for (int i = low ; i < high; ++i){
        if (vect1[i] <= pivot_element){
            less_index++;
            swap(vect1[less_index], vect1[i]);
        }
    }
    
    swap(vect1[less_index+1], vect1[high]);

    return less_index+1;
}

void quickSort(vector <int> &vect1, int start, int end){
    if (start < end){
        int partition_index= partition(vect1, start, end);
        quickSort(vect1, start,partition_index-1);
        quickSort(vect1,partition_index+1,end);
    }

}

int main (){
vector <int> vect1;
vect1.push_back(12);
vect1.push_back(3);
vect1.push_back(17);
vect1.push_back(4);
vect1.push_back(8);
vect1.push_back(1);

//vector<int> sortedvect = bubbleSort(vect1);

// vector <int> selectionSorted = selectionSort(vect1);

//vector <int> insertionSorted = insertionSort(vect1);

quickSort(vect1,0,vect1.size()-1);

// for (int i = 0 ; i < sortedvect.size(); ++i){
//     cout<<sortedvect[i]<<" ";
// }

// for (int i = 0 ; i < selectionSorted.size(); ++i){
//     cout<<selectionSorted[i]<<" ";
// }
// for (int i = 0 ; i < insertionSorted.size(); ++i){
//     cout<<insertionSorted[i]<<" ";
// }
for (int i = 0 ; i < vect1.size(); ++i){
    cout<<vect1[i]<<" ";
}

    return 0;
}