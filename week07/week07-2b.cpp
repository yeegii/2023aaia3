class Solution {
public:
    void myPrintBoard(int a[3][3])
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    bool mytestwin(int a[3][3], int now)
    {
        if(a[0][0]==now && a[0][1]==now && a[0][2]==now) return true;//上橫線
        if(a[1][0]==now && a[1][1]==now && a[1][2]==now) return true;//中橫線
        if(a[2][0]==now && a[2][1]==now && a[2][2]==now) return true;//下橫線

        if(a[0][0]==now && a[1][0]==now && a[2][0]==now) return true; //前直線
        if(a[0][1]==now && a[1][1]==now && a[2][1]==now) return true;//中直線
        if(a[0][2]==now && a[1][2]==now && a[2][2]==now) return true;//後直線

        if(a[0][0]==now && a[1][1]==now && a[2][2]==now) return true;//對角線
        if(a[0][2]==now && a[1][1]==now && a[2][0]==now) return true;//對角線
        return false;
    }


    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={};
        int now=1;
        for(auto move :moves)
        {
            int i=move[0],j=move[1];
            a[i][j]=now;
            myPrintBoard(a);
            if(mytestwin(a,now))
            {
                if(now==1) return "A";
                else return "B";
            }
            now=3-now;
        }
        if(moves.size()==9) return "Draw";
        else return "Pending";
    }
};
