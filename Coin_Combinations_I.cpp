#include <iostream>
#include <string>
#include <limits.h>
#include <vector>

using namespace std;
vector<int> dp;
vector<int> coins;

int sea(int sum) {
    //cout << sum << endl;
    int ans = 0;
    if (sum == 0 ) {
        return 1;
    }
    for (int i = 0 ; i < coins.size(); i++) {
        if(sum - coins[i] >= 0) {
            int result = sea(sum - coins[i]);
            ans += result;
        } else {
            break;
        }
    }
    dp[sum] = ans;
    return ans;
}
int main() {
    int n ,sum;
    int ma = 1e9+7;
    cin >> n >> sum;
    coins.resize(n+1);
    for (int i = 0 ; i < n; i++) {
        cin >> coins[i];
    }   
    dp.resize(sum+1,0);
    sea(sum);
    cout << dp[sum];
    return 0;
}