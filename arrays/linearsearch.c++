#include<iostream>
using namespace std;

struct array{
    int a[10];
    int size;
    int length;
}

void display (struct array arr){
int i;
cout<<"elemts are \n"<<endl;
for(i=0;i<arr.length;i++)
cout<<arr.a[i];
}

int linearsearch(struct array arr,int key){
    int i;
    for(i=0;i<arr.length;i++){
        if(key==arr.a[i])
        return i;
    }
    return -1;
}
int main(){
    struct array arr={2,6,5,4},10,8};
    cout<<linearsearch(&arr,4);
    display(arr);
    return 0;
}