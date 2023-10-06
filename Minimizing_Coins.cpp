#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>need(100005,-1);

int dp (int sum){

}
int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n ,sum;
    cin >> n >> sum;
    while (n--) {
        int tp;
        cin >> tp;
        need.push_back(tp);
    }
    sort(need.begin(),need.end());
    int ans = dp(sum);
    cout << ans;
    return 0;
}