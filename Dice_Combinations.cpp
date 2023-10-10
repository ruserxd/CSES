#include <bits/stdc++.h>    
using namespace std;
typedef unsigned long long int in;
vector<int>a(1000005,-1);
 
in dp(in n) {
    in ma = 1e9 + 7;
    if (n == 0) {
        return 1; 
    }
    if (a[n] != -1) {
        return a[n];
    }
    in ans = 0;
    for (in i = 1 ; i <= 6; i++) {
        if (n >= i) {
            ans += dp(n - i) % ma;
        } else {
            break;
        }
    }
    a[n] = ans % ma;
    return ans % ma;
}
int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    in n;
    cin >> n;
    in ans = dp(n);
    cout << ans ;
    return 0;
