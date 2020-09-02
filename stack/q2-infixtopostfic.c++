#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c=='^')
    return 3;
    else if(c=='*' || c=='/')
    return 2;
    else if(c=='+' || c== '-')
    return 1;
    else 
    return -1;
}

void infixtopostfix(string s){
    std::stack<char> st;//stack
    st.push('N');
    int l= s.length();
    string out;//output
    for(int i=0;i< l;i++){
    if((s[i] >='a' && s[i] <= 'Z ') ||s[i] >='A' && s[i] <= 'z ') )
    out=out+s[i];
    else if(s[i]=='(');
    st.push('(');
    else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
               ns += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
        } 
          
        //If an operator is scanned 
        else{ 
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            st.push(s[i]); 
        } 
  
    }

}
while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        ns += c; 
    } 
      
    cout << ns << endl; 
  
} 
  

int main(){
    string expr='a+b*c-d/e';
    infixtoprostfix(exp);
    return 0;
}