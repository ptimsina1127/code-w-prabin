#include<iostream>
#define N 5

using namespace std;

struct stack{
int top = -1;
int array[N];

};
void push(struct stack *s, int value){
    if (s->top==N-1){
        throw "Stack Is Full";
    }
    else{
        s->top++;
        s->array[s->top]= value;
    }
}
void printStack(struct stack s){
    if(s.top==-1){
       cout<<"No Data to show";
    }
    else{
        cout<<endl;
        for(int i =0; i<=s.top;++i){
            cout<<s.array[i]<<" ";
        }
    }

}

void pop(struct stack *s){
    cout<<"TESTING AFTE LINE 33";
    if(s->top == -1){
        cout<<"No Data to POP";
    }
    else {
        s->top--;
    }
}


int main()
{


 struct stack newstax;

 push(&newstax, 5);
 push(&newstax, 6);
 push(&newstax, 9);
 push(&newstax, 1);
 printStack(newstax);
 pop(&newstax);
 printStack(newstax);
return 0;
}