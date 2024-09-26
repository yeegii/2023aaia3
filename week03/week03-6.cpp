///week03-6.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int now;

    // 讀入正整數數列，直到輸入0
    while (true) {
        cin >> now;
        if (now == 0)
            break;
        a.push_back(now);
    }

    // 讀入要查找的正整數
    cin >> now;
    int ans = 0;

    // 計算出現次數
    for (int b : a) {
        if (b == now)
            ans++;
    }

    // 輸出結果
    cout << ans << endl;

    return 0;
}
