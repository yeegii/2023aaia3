class Solution {
public:
    int lengthOfLastWord(string s)
    {
        bool ans=false; int result=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                ans=true; result++;
            }
            else
            {
                if(ans) break;
            }
        }
        return result;
    }
};
