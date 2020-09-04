#include<iostream>
using namespace std;

struct Mystack{
stack<int> s;
int minele;


void getmin(){
    if(s.empty())
    cout<<"stack is empty\n";
    else
    cout<<"minium elemet in the stack is:"<<minele<<"\n";
  
}
void peek(){
    if(s.empty()){
        cout<<"stack is empty";
        return;
    }
    int t=s.top();
    cout<<"top most element is:";
    (t <minele) ? cout << minele:cout<<t;

}
void pop() 
    { 
        if (s.empty()) 
        { 
            cout << "Stack is empty\n"; 
            return; 
        } 
  
        cout << "Top Most Element Removed: "; 
        int t = s.top(); 
        s.pop(); 

        if(t <minele){
            cout<<minele<<"\n";
            minele=2*minele-t;

        }
        else
        cout<<t <<"\n";
        void push(int x) 
    { 
        // Insert new number into the stack 
        if (s.empty()) 
        { 
            minEle = x; 
            s.push(x); 
            cout <<  "Number Inserted: " << x << "\n"; 
            return; 
        } 
  
        // If new number is less than minEle 
        if (x < minEle) 
        { 
            s.push(2*x - minEle); 
            minEle = x; 
        } 
  
        else
           s.push(x); 
  
        cout <<  "Number Inserted: " << x << "\n"; 
    } 



};

int main(){
    mystack s;
s.push(3); 
    s.push(5); 
    s.getMin(); 
    s.push(2); 
    s.push(1); 
    s.getMin(); 
    s.pop(); 
    s.getMin(); 
    s.pop(); 
    s.peek(); 
  
    return 0; 
}