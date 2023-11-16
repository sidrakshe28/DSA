class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {

        int n=nums.size();
        string str="";
        // Consider ith character of ith string, and take opposite of that char to the string
        for(int i=0;i<n;i++)
        {
            if(nums[i][i]=='1') str+="0"; // 
            else str+="1";
        }
        return str;
    }
};