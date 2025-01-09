class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left=0, right=matrix[0].size()-1;
        int top=0, buttom=matrix.size()-1;
        vector<int>ans;
        while(top<=buttom && left<=right)
        {
            for(int i=left; i<=right; i++) ans.push_back(matrix[top][i]);
            top++;

            for(int i=top; i<=buttom; i++) ans.push_back(matrix[i][right]);
            right--;

            if(top<=buttom && left<=right)
            {
                for(int i=right; i>=left; i--) ans.push_back(matrix[buttom][i]);
            }
            buttom--;

            if(top<=buttom && left<=right)
            {
                for(int i=buttom; i>=top; i--) ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};
