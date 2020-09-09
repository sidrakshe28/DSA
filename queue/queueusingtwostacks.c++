//queue using two stacks;
class stackqueues{
    private:
    stack <int> S1;
    stack <int> S2;
    public:
    void push(int);
    int pop();
    
};
void stackqueues::push(int x){
    S1.push(x);

}
int stackqueues::pop(){
    int x;
    if(S1.empty()){
        return -1;
    }
    else{

    
    while(!S1.empty()){
        S2.push(S1.top());
        S1.pop();
    }
    x=S2.top();
    S2.pop();
    while(!S2.empty()){
        S1.push(S2.top());
        S2.pop();
    }
    }
    return x;
}