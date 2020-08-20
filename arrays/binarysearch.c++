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

void BinarySearch(struct arr int ,int key ){
    int l,mid,h;
    l=0;
    h=arr.length -1;
   
   while(l<=h)
   {
       mid=(l+h)/2;
       if(key==arr.a[mid])
       return mid;
       else if(key<arr.a[mid])
       h=mid-1;
       else
           l=mid+1;
       
   }
    return -1;

}

int main(){
    struct array arr={ {2,3,4,5,6},10,5};
    cout<<binarysearch(arr,5)<<endl;
    display(arr);

    return 0;

}