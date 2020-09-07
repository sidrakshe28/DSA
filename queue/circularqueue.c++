#include<bits/stdc++.h>
using namespace std;


struct main(){


int rear,front;

int size;
int *arr;

Queue(int s){
    front =rear=-1;
    size=s;
    arr=new int[s];
}

 void enQueue(int value);
 int deQueue();
 void displayQueue();

};

//fucntion to create circular queue
void Queue::enQueue(int value){
    if((front==0 && rear==size-1))||(rear==(front-1)%(size-1))
    {
        cout<<"\nQueue is full";
        return;
    }
   else if(front==-1){
       front=rear=0;
       arr[rear]=value;
   }
   else if(front==-1){
       front=raer=0;
       arr[rear]=alue;
   }

}

int main(){

     Queue q(5);

}