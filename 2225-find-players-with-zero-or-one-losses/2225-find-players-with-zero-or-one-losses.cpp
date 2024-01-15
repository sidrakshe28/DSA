class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {

       
        unordered_map<int,int>map1; 
        unordered_map<int,int>map2; 

        
        
        for(int i=0;i<matches.size();i++){
         
                map1[matches[i][0]]++;  
                map2[matches[i][1]]++;  
            
        }
      
        

        vector<vector<int>>ans;
        vector<int>ans1;  
        vector<int>ans2; 
      

        for(auto & it: map1){
            if(map2[it.first] == 0){
                ans1.push_back(it.first);  
            }
        }


        

        for(auto & it: map2){
            if(it.second==1){
                ans2.push_back(it.first);  
            }

        }

        // Sort the vectors 
        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());

        // Store the results vectors in the final result vector

        ans.push_back(ans1);
        ans.push_back(ans2);
       
        // Return the final result
        return ans;
    }
};
