#include<iostream>
using namespace std;

void convertopposite(string &str){

    int ln =str.length();
    
    for(int i=0;i<ln;i++){
        if(str[i] >='a' && str[i]<='z')
        str[i]=str[i]-32;
        else if(str[i]>='A'&& str[i]<='Z')
        str[i]=str[i]+32;
    }
}
int main(){
    string str='geelsforgeeks';
    convertopposite(str);
    cout<<str;
}