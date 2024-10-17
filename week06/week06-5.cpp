class Solution 
{
public:
    int maximumSwap(int num) 
    {
        int ans=num;
        string s=to_string(num);//stoi反過來
        for(int i=0;i<s.size()-1;i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                swap(s[i],s[j]);
                ans=max(ans,stoi(s));
               swap(s[i],s[j]);
            }
        }
        return ans;
    }
};