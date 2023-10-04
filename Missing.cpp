#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ct = n,k;
    for (int i = 1 ; i < n; i++) {
        cin >> k;
        ct += i;
        ct -= k;
    }
    cout << ct;
    return 0;
}