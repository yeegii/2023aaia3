class Solution
{
public:
    int arraySign(vector<int>& nums)
    {
        int count = 0;
        for (int num : nums)
        {
            if (num == 0) return 0;  // �p�G�� 0�A��^ 0
            if (num < 0) count++;  // �p��t�ƪ��ƶq
        }
        if(count%2==0) return 1;
        else return -1;
    }
};
