#include <iostream>
using namespace std;
int dp[100005][105] = {0};
int main() {
    int n , m;
    cin >> n >> m;
    int a;
    cin >> a;
    if (a) {
        dp[0][a] = 1;
    } else {
        for (int i = 1 ;i <= m; i++) {
            dp[0][i] = 1;
        }
    }
    int ma = 1e9+7;
    for (int i = 1 ; i < n; i++) {
        cin >> a;
        if(a) {
            dp[i][a] += dp[i-1][a+1];
            dp[i][a] %= ma;
            dp[i][a] += dp[i-1][a];
            dp[i][a] %= ma;
            dp[i][a] += dp[i-1][a-1];
            dp[i][a] %= ma;
        } else {
            for (int k = 1 ; k <= m ; k++) {
                dp[i][k] += dp[i-1][k+1];
                dp[i][k] %= ma;
                dp[i][k] += dp[i-1][k];
                dp[i][k] %= ma;
                dp[i][k] += dp[i-1][k-1];
                dp[i][k] %= ma;
            }
        }
    }
    int ans = 0;
    for (int i = 1 ; i <= m;i++) {
        ans += dp[n-1][i];
        ans %= ma;
    }
    cout << ans << endl;
}