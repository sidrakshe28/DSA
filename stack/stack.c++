//baisc stack operations

#include<bits/stdc++.h>
using namespace std;
#define max 10000;

class stack{
    int top;
    public:
    int a[Max];
    Stack(){
        top=-1;
    }

    bool push(int x);
    int pop(int x);
    int peek();
    bool isEmpty();
};

bool Stack::push(int x){
    if(top >= (max-1 )){
        cout<<"stack overflow";
        return false;
    }
    else
    {
     top++;
     a[top]=x;
     cout<<x<<"pushed into stack \n";
     return true;
    }
    
}

int stack::pop()
{
    if(top < 0){
        cout<<"stack underflow";
        return 0;
    }
    else{
        top--;
        a[top]=x;
        return x;
    }
}


int Stack::peek()
{
    if(top <0){
        cout<<"stack is empty";
        return 0;
    }
    else{
        int x=a[top];
        return x;
    }
}

bool Stack::isEmpty() 
{ 
    return (top < 0); 
} 


int main() 
{ 
    class Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.pop() << " Popped from stack\n"; 
  
    return 0; 
} 