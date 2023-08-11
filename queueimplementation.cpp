#include <iostream>
#define N 5
//queue,enque,deque
using namespace std;

// template <class T>
struct queue {
    int ar[N];
    int front = 0;
    int rear = -1;
};

void enque(struct queue *newstax,int elem){
    if(newstax->rear==N-1){
        cout<< "The queue is Full";
    }
    else{
        newstax->rear++;
        newstax->ar[newstax->rear]= elem;
    }

}
void deque(struct queue *s){
    if(s->rear< s->front){
        cout<< " The Queue is empty";
    }
    else{
        s->front++;
    }
}

void printelems(struct queue s){
    cout<<endl;
    for (int i = s.front ; i<= s.rear ; ++i ){
    cout<<s.ar[i]<<" ";
    }

}
int main (){
    struct queue newstacx;
    enque(&newstacx,5);
    enque(&newstacx,8);
    enque(&newstacx,1);
    enque(&newstacx,9);
    enque(&newstacx,5);
    //enque(&newstacx,18);
    printelems(newstacx);

    deque(&newstacx);
    printelems(newstacx);

    enque(&newstacx,18);
    printelems(newstacx);

    printelems(newstacx);
    return 0;
}