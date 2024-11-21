class Solution
{
public:
    int arraySign(vector<int>& nums)
    {
        int count = 0;
        for (int num : nums)
        {
            if (num == 0) return 0;  // 如果有 0，返回 0
            if (num < 0) count++;  // 計算負數的數量
        }
        if(count%2==0) return 1;
        else return -1;
    }
};
