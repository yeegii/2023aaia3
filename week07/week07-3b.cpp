class Solution {
public:
    bool isRobotBounded(string instructions) {
        int m=instructions.size();
        int dx[4]={1,0,-1,0};
        int dy[4]={0,1,0,-1};
        int x=0,y=0,direction=0;//方向 右0 下1 左2 上3
        for(int i=0;i<m;i++)
        {
            if(instructions[i]=='G')
            {
                x=x+dx[direction];
                y=y+dy[direction];
            }
            if(instructions[i]=='L') direction=(direction+3)%4;
            if(instructions[i]=='R') direction=(direction+1)%4;
        }
        if(x==0 && y==0) return true;
        else if(direction==0) return false;
        else return true;
    }
};
