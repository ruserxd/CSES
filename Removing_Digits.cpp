#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unistd.h>

using namespace std;

vector < pair<int,int> > mod;
vector <int> dp;

int recrusive(int n) {
    for (int i = 0 ;i <= 9 ; i++) dp[i] = 1;

    for (int i = 10; i <= n ; i++) {
        mod.clear();
        int copy = i;
        while (copy > 0) {
            int temp = copy%10;
            if(temp != 0)
            mod.push_back(make_pair(dp[i-temp]+1,i - temp));
            copy /= 10;
        }
        int max_value = INT_MAX;
        for (pair<int, int> o : mod) {
            max_value = min(max_value, o.first);
        }
        dp[i] =  max_value;  
    }  
    return 0;
}

int main () {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    dp.resize(n+1,0);
    dp[0] = INT_MAX;
    recrusive(n);
    cout << dp[n];
    return 0;
}