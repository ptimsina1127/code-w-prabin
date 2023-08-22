#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Set{
vector <T> elements;

public:

void addElements(T parameter){
    elements.push_back(parameter);
}

void removeElements(T parameter){
   for (int i = 0 ; i < elements.size(); ++i){
        if(elements[i]==parameter){
            elements.erase(elements.begin() + i);
        }
    }
}

void printELements(){
    for (int i = 0 ; i < elements.size(); ++i){
        cout<<elements[i]<<" ";
    }
    cout<<endl;
}

void unionElements(Set setobj2){
    for(int i = 0 ; i < elements.size(); ++i){
        for (int j = 0; j < setobj2.elements.size(); ++j){
            if ( elements[i]== setobj2.elements[j]){
                setobj2.elements.erase(setobj2.elements.begin() + j);
                
            }
        }
    }
    for (int i = 0 ; i < elements.size(); ++i){
        cout<< elements[i]<< " ";
    }
    for (int i = 0 ; i < setobj2.elements.size(); ++i){
        cout<< setobj2.elements[i]<<" ";
    }
    cout<<endl;
}
void intersectionElements(Set setobj2){
     for(int i = 0 ; i < elements.size(); ++i){
        for (int j = 0; j < setobj2.elements.size(); ++j){
            if ( elements[i]== setobj2.elements[j]){
                //setobj2.elements.erase(setobj2.elements.begin() + j);
                cout<<setobj2.elements[j] <<" ";
                
            }
        }
    }
    cout<<endl;
}

void differenceElements(Set setobj2){
     for(int i = 0 ; i < elements.size(); ++i){
        bool found = false;
        for (int j = 0; j < setobj2.elements.size(); ++j){
            if ( elements[i]== setobj2.elements[j]){
                found =true;
                break;
            }
        }
        if (found==false){
            cout<<elements[i] <<" ";
        }
        
    }
    cout<<endl;
}


};

int main (){

    Set<int> setobj;
    setobj.addElements(4);
    setobj.addElements(7);
    setobj.addElements(9);
    setobj.addElements(1);
    setobj.addElements(5);

    cout<<"Set A"<<endl;
    setobj.printELements();

   // setobj.removeElements(1);
   // setobj.printELements();

    Set<int> setobj2;
    setobj2.addElements(5);
    setobj2.addElements(7);
    setobj2.addElements(9);
    setobj2.addElements(1);
    setobj2.addElements(3);
    setobj2.addElements(8);
    cout<<"Set B"<<endl;
    setobj2.printELements();

    cout<<"Union"<<endl;
    setobj.unionElements(setobj2);

    cout<<"Intersetion"<<endl;
    setobj.intersectionElements(setobj2);

    cout<< "Difference A-B "<<endl;
    setobj.differenceElements(setobj2);

    cout<< "Difference B-A "<<endl;
    setobj2.differenceElements(setobj);
    

    return 0;
}