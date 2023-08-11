#include <iostream>
#define N 10

using namespace std;

struct stack{
    int top = -1;
    char array[N];
};

char gettop(struct stack *s){
    return s->array[s->top];
}

void push(struct stack *s, char value){
if (s->top==N-1){
        throw "Stack Is Full";
    }
    else{
        s->top++;
        s->array[s->top]= value;
    }
}

void pop(struct stack *s){
    if(s->top == -1){
        cout<<"No Data to POP";
    }
    else {
        s->top--;
    }
}
char inversesym(char c){
    if (c ==')'){
        return '(';
    }
    if (c =='}'){
        return '{';
    }
    if (c ==']'){
        return '[';
    }
}

int main (){
    struct stack newstack;
    char ar[N] = "{}()(a+b)";
    int length = sizeof(ar)/sizeof(char);
    for (int i = 0 ; i < length; ++i){
        
        if (ar[i] =='{' ||ar[i] =='(' || ar[i]=='[' ){
            push(&newstack, ar[i]);
        }

        else if(ar[i] =='}' ||ar[i] ==')' || ar[i]==']'){
            if(inversesym(ar[i])==gettop(&newstack)){
                pop(&newstack);
            }
            else{
                push(&newstack,ar[i]);
            }
        }

        else{
            
        }
        
    }

    if(newstack.top==-1){
        cout<<"The String is balanced";
    }
    else 
    cout<<"The string is not balanced";

    return 0;
}