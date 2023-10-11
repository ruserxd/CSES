#include <iostream>
using namespace std;
  
int n, x, c[105], dp[1000005], mod = 1e9+7;
  
void prin (int sum) {
    for (int i = 0 ; i <= sum; i++){
        if(dp[i]) 
            cout << i <<"="<< dp[i] << endl;
    } 
    cout << endl;
}
int main() {
    cin >> n >> x;
    dp[0] = 1;
    for (int i = 0 ; i < n ;i++) cin >> c[i];
    for (int i = 0 ; i < n ;i++) {
        for (int k = 1; k <= x ;k++) {
            if (k - c[i] >= 0) {
                dp[k] += dp[k - c[i]];
                dp[k] %= mod;
            }
            //prin(x);
        }
    }
    cout << dp[x];
}