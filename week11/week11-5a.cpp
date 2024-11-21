class Solution
{
public:
    int arraySign(vector<int>& nums)
    {
        int i=0;
        int N=nums.size()-1;
        long long ans=1;
        while(i<=N)
        {
            ans*=nums[i];
            i++;
        }
        if(ans==0) return 0;
        else if(ans>0) return 1;
        else return -1;
    }
};
