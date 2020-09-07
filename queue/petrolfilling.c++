#include<iostream>
using namespace std;

int gettour(int petrol[], int distance[], int m){
    int sum=0;start=0;diff=0;
    for(int i=0;i<n;i++){
        sum=sum+petrol[i]-distance[i];
      if(sum <0){
          start=i+1;
          diff=sum;
          sum=0;
      }

    }
    return sum+diff >0 ? start: -1;

}


int main(){
    int petrol={4,6,7,4};
    int distance={6,5,3,5};
    int value=gettour(petrol ,distance,4);
    cout<<value;

}