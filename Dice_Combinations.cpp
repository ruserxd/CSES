#include <iostream>
using namespace std;
#define ma 1000005
typedef unsigned long long int ull;

ull ar[ma];

ull dp(int n) {
    ar[0] = 1;
    ull m = 1e9 + 7;
    for (ull i = 1; i <= n; i++) {
        for (ull j = 1; j <= 6 && j <= i; j++) {
            ar[i] = (ar[i] + ar[i - j])%m;
        }
    }

    return ar[n];
}
int main() {
    ull n , m = 1e9+7;
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n;
    ull ans = dp(n) % m;
    cout <<ans;
    return 0;
}