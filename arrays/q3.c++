//triplet.c++

#include<bits/std++.h>
using namespace std;

void findtriplet(int arr[],int n){
 sort(arr,arr+n);

 for(int i=n-1;i>=0;i--)
 int j=0;
 int k=i-1;

 while(j<k){
     if(arr[i]==arr[j]+arr[k])
     cout<<"numbers are"<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
     return ;

 }
 else if(arr[i]>arr[j]+arr[k])
 j=j+1;

 else
 k=k-1;
     
 }
 
}
cout<<"no triplets";
}



int main(){
    int arr[]={5,32,1,7,17};
    int n=sizeof(arr)/sizeof(arr[0]);
    findtriplet(arr,n);
    return 0;

}