#include <iostream>

using namespace std;

class Tree
{
private:
public:
    int arr[30];
    Tree(){
        for (int i = 0 ; i < 30; ++i ){
            arr[i] = -1;
        }
    }
    // int arrpos=-1;
    void addElements(int insertvalue);
    void printElements();
};

void Tree::addElements(int value)
{
    // if ( arrpos == -1){
    //     arr[0] = value;
    //     arrpos++;
    // }
    int currentIndex = 0;
    while (arr[currentIndex] != -1)
    {
        if (arr[currentIndex] < value)
        {
            currentIndex = 2 * currentIndex + 2;
        }
        else
        {
            currentIndex = 2 * currentIndex + 1;
        }
    }
    arr[currentIndex] = value;
}

void Tree ::printElements()
{
    for (int i = 0; i < sizeof(arr) / sizeof(int); ++i)
    {
        if (arr[i] != -1)
        {
            cout << arr[i]<< " ";
        }
    }
}

int main()
{
    Tree t1;
    t1.addElements(15);
    t1.addElements(56);
    t1.addElements(66);
    t1.addElements(12);
    t1.addElements(31);
    t1.printElements();
    // bool containsELem = t1.contains(755);
    // cout<<containsELem;

    return 0;
}