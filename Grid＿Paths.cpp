#include<iostream>
#include<vector>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n ;
    cin >> n;
    int ma = 1e9+7;
    vector<vector<char> >maze (n,vector<char>(n));
    for(int i = 0 ; i < n ; i++) 
        for(int k = 0 ; k < n ; k++)
            cin >> maze[i][k];
    vector<vector<int> >dp(n,vector<int>(n,0));
    dp[0][0] = (maze[0][0] != '*');
    for(int i = 0; i < n; i++) {
        for(int k = 0 ; k < n; k++) {
            if(maze[i][k] != '*') {
                if(i-1>=0 && maze[i-1][k]!='*'){
                    dp[i][k] = (dp[i][k] + dp[i-1][k])%ma;
                }
                if(k-1>=0 && maze[i][k-1]!='*'){
                    dp[i][k] = (dp[i][k] + dp[i][k-1])%ma;
                }
            }
        }
    }
    cout << dp[n-1][n-1];
    return 0;
}