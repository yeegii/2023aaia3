//week01-5.cpp
# include <iostream>
using namespace std;

int main()
{
    int n, N = 0;
    cin >> n;
    int a[32];  // 用來儲存二進制位的數組  假設輸入的整數在 32 位內

    while(n > 0)
    {
        a[N++] = n % 2;  // 將 n 除以 2 的餘數（即最低位）儲存到 a[N] 中
        n /= 2;          // 將 n 右移一位
    }

    for(int i = N - 1; i >= 0; i--) //從 a[N-1]（最高位）開始，依次輸出數組中的二進制位，直到 a[0]（最低位）。
    {
        cout << a[i];   // 從最高位到最低位輸出二進制位
    }

    return 0;
}