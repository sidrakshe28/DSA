#include<iostream>
using namespace std;
bool isvowel(char ch){
    
    ch=toupper(ch);
    return (ch='A'|| ch=='E'|| ch=='I'||ch=='O'||ch=='U');

}

int countvowels(string str){
    int count = 0;
    for(int i=0;i<str.length();i++)
     if(isvowel(str[i]))
     ++count;
     return count;

}

int main(){
    string str="abc de";
    cout<<countvowels(str)<<endl;
    return 0;
}