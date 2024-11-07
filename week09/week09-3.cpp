class Solution
{
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<bool> left(m);
        vector<bool> up(n);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    left[i]=true;
                    up[j]=true;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            if(left[i]==true)
            {
                for(int j=0;j<n;j++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            if(up[j]==true)
            {
                for(int i=0;i<m;i++)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
