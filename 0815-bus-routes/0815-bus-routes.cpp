class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
       if(source==target)return 0;
       unordered_map<int,vector<int>>m;
       for(int i=0;i<routes.size();i++){
           for(int stop:routes[i]){
              m[stop].push_back(i);
           }
       }

       vector<int>visited(routes.size(),0);
       queue<int>q;
       q.push(source);
       int buses=0;
       while(!q.empty()){
           int size=q.size();
           while(size--){
              int node=q.front();
           q.pop();
           if(node==target)return buses;
           for(auto it:m[node]){
               if(visited[it]){
                   continue;
               }
               visited[it]=1;
               for(auto i:routes[it]){
                   q.push(i);
               }
           }
           }buses++;
          
       }return -1;
    }
};