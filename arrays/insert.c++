#include <iostream>
using namespace std;

struct array{
    int A[20];
    int size;
    int length;

}

void display(struct array arr){
    int i;
    cout<<"elements are\n"<<endl;
    for(i=0;i<arr.length;i++)
     cout<<arr.A[i]<<endl;
}


void append(struct array *arr ,int x){
    if(arr->length< arr->size)
    arr->A[arr->length++]=x;
}

void insert(struc t array *arr,int index,int x){
    int i;
    if(index >=0 && index <=arr->length){
   for (i=arr->length;i>index;i--)
   arr->a[i]=arr->a[i-1];
   arr->a[index]=x;
   arr->length++;
    }
}
int main(){
struct array arr={1,2,3,4,5,6},10,9};
  append(&arr,10);
    display(arr);

    return 0;
}