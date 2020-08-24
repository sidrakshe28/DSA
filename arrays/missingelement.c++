#include<iostream>
using namespace std;

int getmissingele(int a[],int n){
    int sum=(n+1)*(n+2)/2;
    for(int i=0;i<n;i++)
    sum=sum-a[i];
    return sum;

}
int main(){
    int arr []={1,2,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int miss =getmissingele(arr,n);
    cout<<miss;
}