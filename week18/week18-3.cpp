class Solution {
public:
    string addBinary(string a, string b) {
        int left=a.size()-1;
        int right=b.size()-1;
        int temp=0;
        string ans;
        while(left>=0 || right>=0 || temp>0)
        {
            if(left>=0)
            {
                temp+=a[left]-'0';
                left--;
            }
            if(right>=0)
            {
                temp+=b[right]-'0';
                right--;
            }
            ans+=(temp%2+'0');
            temp/=2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
