#include <iostream>
#include <string>
#include <limits.h>
#include <vector>
#include <cstdlib>
using namespace std;

typedef long long int ll;
vector<ll> dp;
vector<ll> coins;
const ll ma = 1e9+7;
ll loc = 0;

ll sea(ll sum) {
    ll ans = 0;
    if (sum == 0 ) {
        return 1;
    }
    if (dp[sum] != -1) {
        return 0;
    }
    for (int i = 0 ; i < coins.size(); i++) {
        if((sum - coins[i]) >= 0) {
            ll result = sea(sum - coins[i])%ma;
            ans += (result %ma);
        }
    }
    ans = ans % ma;

    if(sum >= 0 && sum <= loc){
        dp[sum] = ans ;
    }
    return ans ;
}
int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    ll n ,sum;
    cin >> n >> sum;
    coins.resize(n);
    loc = sum;

    for (int i = 0 ; i < n; i++) {
        cin >> coins[i];
    }   
    dp.resize(sum+1,-1);
    sea(sum);
    if(dp[sum] != -1)
        cout << dp[sum];
    else 
        cout << "0";
    return 0;
}