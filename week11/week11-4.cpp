class Solution
{
public:
    bool checkStraightLine(vector<vector<int>>& coordinates)
    {
        int x0= coordinates[0][0], y0=coordinates[0][1];
        int x1= coordinates[1][0], y1=coordinates[1][1];
        for(int i=2;i<coordinates.size();i++)
        {
            int x2=coordinates[i][0],y2=coordinates[i][1];
            if((x1-x0)*(y2-y0)!=(y1-y0)*(x2-x0)) return false;
            // 左上      右下     右上     左下    不相等 失敗
        }
        return true;
    }
};
