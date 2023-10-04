#include <iostream>
using namespace std;
#define in unsigned long long int
int main() {
    in n;
    cin >> n;
    cout << n << " ";
    while(n != 1) {
        if ( n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        cout << n <<" ";
    }
    return 0;
}