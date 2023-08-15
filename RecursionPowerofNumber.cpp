#include <iostream>

using namespace std;

class PowerofX{
    public:
    int calculation(int x,int n){
        if (n==0){
            return 1;
        }
        int result = x * calculation(x, (n-1));

    }

};


int main (){
int x,n; 
cout<< " Enter the number X and N seperated by space:";
cin >> x>>n;
 PowerofX p;
 cout << p.calculation(x,n);

    return 0;
}