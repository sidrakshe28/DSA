  class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      unordered_map<int, int> mp;
               
        for(int i: arr){
            if((i%2 == 0 && mp[i/2]) or mp[2*i]){
                return true;
            }
            mp[i]++;
        }
       return false;        
    } 
        
    
};
