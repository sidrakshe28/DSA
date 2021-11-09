class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        
        
       int n=arr.size(); 
		unordered_map<int,int> m;
		for(int i=0;i<n;i++){
			m[arr[i]]++;
		}
		int ans=-1;
		for(auto it=m.begin();it!=m.end();it++){
			if(it->second>1){
				ans=it->first;
			}
		}
	    return ans;  
    }
};
