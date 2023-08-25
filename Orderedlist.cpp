#include <iostream>

using namespace std;
template <class T>
class sortedlist{
    public:
    sortedlist(){
    arrCapacity = 10;
    listlen = 0;
    }
    bool isfull(){
    //int numelems = sizeof(ar)/sizeof(int) 
    return (listlen==arrCapacity);
    }
    void additem(T value){
        if (isfull()){
            cout<<"The list is Full";
            return;
        }
        if (listlen==0){
            ar[0] = value;
            listlen++;
            return;
        }
        for (int i = 0 ; i < listlen; ++i){
            if (ar[i]> value){
                for (int j =listlen ; j > i ; --j){
                    ar[j]= ar[j-1];
                }
                ar[i]= value;
                listlen++;
                return;
            }
        }
        ar[listlen]= value;
        listlen++;
    }
    void printlist(){
        for (int i = 0 ; i < listlen; ++i){
        cout<<ar[i];
        }
    }

    private:
    int ar[10];
    int listlen;
    int arrCapacity;

};

int main (){
    sortedlist<int> list;
    list.additem(3);
    list.additem(2);
    list.additem(7);
    list.additem(1);
    list.additem(9);
    list.additem(9);
    list.additem(9);
    list.additem(9);
    list.additem(9);
    list.additem(9);
    list.additem(11);
    list.printlist();
    return 0;
}