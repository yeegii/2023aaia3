int maximumWealth(int** accounts, int accountsSize, int* accountsColSize)
{
    int m=accountsSize;
    int n=accountsColSize[0];
    int max=0;
    for(int i=0;i<m;i++)
    {
        int ans=0;
        for(int j=0;j<n;j++)
        {
            ans+=accounts[i][j];
        }
        if(ans>max) max=ans;
    }
    return max;
}
