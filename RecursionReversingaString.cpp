// Deko String lai reverse Garne ABCD == DCBA
#include <iostream>

using namespace std;

class ReverseString{
    public:
    void calculation(string str){
        int strlen = str.length();
        if (strlen == 1){
            cout<<str; // Also you can write str[0]
        }
        cout<<str[strlen-1];
        calculation(str.substr(0,strlen-1));

    }

};


int main (){
string i; 
cout<< " Enter a String : ";
cin >> i;
 ReverseString reverse;
 reverse.calculation(i);

    return 0;
}
