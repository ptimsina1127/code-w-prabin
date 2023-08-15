#include <iostream>

using namespace std;

class Facto{
    public:
    int calculation(int i){
        if (i==1){
            return 1;
        }
        int result = i * calculation(i-1);

    }

};


int main (){
int i; 
cout<< " Enter number for Factorial:";
cin >> i;
 Facto factorial;
 cout << factorial.calculation(i);

    return 0;
}