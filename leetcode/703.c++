class KthLargest
{
    public:
    priority_queue<int,vector<int>,greater<int>>topK;
    int k;
    KthLargest(int k, vector<int>& nums)//O(n) where n=nums.size()
    {
        this->k=k;
        for(int i=0;i<nums.size();i++)
        {
            topK.push(nums[i]);
            if(topK.size()>k)
                topK.pop();
        }
    }
    int add(int val)//O(log(k))
    {
        topK.push(val);
        if(topK.size()>this->k)
            topK.pop();
        return topK.top();
    }
};
