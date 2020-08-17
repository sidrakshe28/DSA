#include<iostream.h>
using namespace std;

void main(){
    int a[]={3,2,1,8,11};
    int pos,num,i;
    cout<<"enter the position";
    cin>>pos>>num;
    for(i=4;i>pos;i--)
    a[i+1]=a[i];
    a[pos]=num;
    cout<<"new array";
    for(i=0;i<6;i=i+1)
    cout<<a[i];
    return 0;
}