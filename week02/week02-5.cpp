class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end()); // 將字串 s 排序
        sort(t.begin(), t.end()); // 將字串 t 排序
        return s == t;           // 比較排序後的字串
    }
};
