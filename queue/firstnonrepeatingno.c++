#include<iostream>
#include<map>
using namespace std;

void forceinstream(char*a ,int n){
    for(i=0;i<n;i++){
        if(m.find(a[i])==m.end()){
            q.push(a[i]);
            
        }
        m[a[i]]++;
        if(m[q.front()]==1){
            cout<<q.front()<<" ";
        }
        else
        {
            while (!q.empty())
            {
                q.pop();
                if (m[q.front()]==1)
                {
                    cout<<q.front()<<" ";
                    break;
                }
                
            }
            if(q.empty()){
                cout<<-1<<" ";
            }
            
        }
        
    }
}
while(!q.empty()){
    q.pop();
}
m.clear();
cout<<endl;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        forceinstream(a,n);
    }
    return 0;
}
