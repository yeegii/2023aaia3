class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        int prefixsum[words.size() + 1]; // �x�s�e��M
        prefixsum[0] = 0;

        for (int i = 0; i < words.size(); i++) {
            prefixsum[i + 1] = prefixsum[i];
            // �ˬd��������r���M���r���O�_���O�����r��
            if (words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' ||
                words[i][0] == 'o' || words[i][0] == 'u') {

                int N = words[i].length();
                if (words[i][N - 1] == 'a' || words[i][N - 1] == 'e' ||
                    words[i][N - 1] == 'i' || words[i][N - 1] == 'o' ||
                    words[i][N - 1] == 'u') {
                    prefixsum[i + 1]++;
                }
            }
        }

        // �B�z�C�Ӭd��
        for (int i = 0; i < queries.size(); i++) {
            int left = queries[i][0], right = queries[i][1];
            ans.push_back(prefixsum[right + 1] - prefixsum[left]);
        }

        return ans;
    }
};
