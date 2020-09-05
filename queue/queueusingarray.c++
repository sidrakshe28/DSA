#include<iostream>
using namespace std;


struct Queue{

    int front , rear , capacity;
    int* queue;
    Queue(int c){
    front=rear=0;
    capacity=c;
    queue=new int;

    }
    Queue(){ delete[] queue;}

    void queueEnqueue(int data){
        if(capacity == rear)
        {
      cout<<"\n Queue is full\n";
       return;
        }

        else{
           queue[rear]=data;
           rear++;
        }
        return;
    }

   void queueDequeue(){
       if(front==rear){
     cout<<"\n queue is empty\n";
     return;
       }

       else{
           for(int i=0;i <rear-1;i++){
               queue[i]=queue[i+1];
           }

           rear--;
       }
       return;
   } 

   void queueDisplay(){
       int i;
       if(front==rear){
           cout<<"\nqueue is empty\n";
           return;
       }
       for(i=front;i < rear;i++){
           cout<<queue[i];
       }
       return;
   }

    void queueFront() 
    { 
        if (front == rear) { 
            cout<<"\nQueue is Empty\n"); 
            return; 
        } 
        cout<<"\nFront Element is: %d", queue[front]); 
        return; 
    } 
};

int main(){

        Queue q(4);
        q.queueDisplay(); 
  
    // inserting elements in the queue 
    q.queueEnqueue(20); 
    q.queueEnqueue(30); 
    q.queueEnqueue(40); 
    q.queueEnqueue(50); 
  
    // print Queue elements 
    q.queueDisplay(); 
  
    // insert element in the queue 
    q.queueEnqueue(60); 
  
    // print Queue elements 
    q.queueDisplay(); 
  
    q.queueDequeue(); 
    q.queueDequeue(); 
  
    printf("\n\nafter two node deletion\n\n"); 
  
    // print Queue elements 
    q.queueDisplay(); 
  
    // print front of the queue 
    q.queueFront(); 
  
    return 0; 
} ;