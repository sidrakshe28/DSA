#include<iostream>
using namespace std;
void main(){
    int a[5]={1,2,3,4,5};
    cout<<"enter the position";
    cin>>pos;
    for(i=0;i<5;i=i+1){
        a[i]=a[i+1];
    }
        for(i=0;i<4;i=i+1)
        cout<<a[i];
        return 0;
    }
}