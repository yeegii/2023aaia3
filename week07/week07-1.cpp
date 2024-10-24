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
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={};
        for(auto move :moves)
        {
            int i=move[0],j=move[1];
            a[i][j]=1;
            myPrintBoard(a);
        }
        return "A";
    }
};
