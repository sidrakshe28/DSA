class Solution {
public:
    int minimumOneBitOperations(int n) {
        if(n==0)
        return 0;
        vector<long long>v(32,0);
        v[0]=1;
        for(int i=1;i<32;i++)
        {
            v[i]=2*v[i-1]+1;
        }
        long long ans=0,sign=1;
        for(int i=31;i>=0;i--)
        {
            int set=((1<<i)&n);
            if(set==0)
            continue;
            else
            {
                if(sign>0)
                ans+=v[i];
                else
                ans-=v[i];
            }
            sign=sign*(-1);
        }return ans;
    }
};