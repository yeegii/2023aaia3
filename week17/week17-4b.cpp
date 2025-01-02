class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool up=true;
        bool down=true;
        int n=nums.size();
        for(int i=0; i<n-1; i++)
        {
            if(nums[i]>nums[i+1]) up=false;
        }
        for(int i=n-1; i>=1; i--)
        {
            if(nums[i]>nums[i-1]) down=false;
        }
        return up||down;
    }
};
