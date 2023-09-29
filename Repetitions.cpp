#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ct = 1,ans =0;
    for (int i = 1 ; i < s.length(); i++) {
        if(s[i] == s[i-1]) {
            ct++;
        } else {
            ans = max(ct, ans);
            ct = 1;
        }
    }
    ans = max(ct, ans);
    cout << ans ;
}