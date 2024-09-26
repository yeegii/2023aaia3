///week03-5.cpp
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ans = s + s;
        string sub= ans.substr(1, ans.size()-2);
        return sub.find(s) != string::npos;
    }
};
