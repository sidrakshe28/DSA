#include <iostream>
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

int Get(int array arr ,int index){
    if(index>=0 && index<arr.length)
    return arr.a[i];
    return -1;
}

void set(struct array *arr,int index,int x){
    if(index >=0 && index<arr->length)
        arr->a[index]=x;
}

int max(struct array arr){
    int max=arr.a[0];
    int i;
    for(i=1;i<arr.length;i++){
        if(arr.a[i]>max)
         max=arr.a[i];
    }

}

int sum(struct array arr)
{
    int s=0;
    int i=0;
    for(i=0;i<arr.length;i++)
    s=s+arr.a[i];
    return s;

}

float avg(struct array arr){
    return (float)Sum(arr)/arr.length;

}
int main(){
    struct array arr={{2,3,4,5,6}10,5};
    cout<<get(arr,2);
    
    display(arr);
    return 0;
}