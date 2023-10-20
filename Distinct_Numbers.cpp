#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int array[300000] = {0};
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++) {
        cin >> array[i];
    }
    sort(array,array+n);
    int ans = 1;
    for (int i = 1 ;i < n; i++) {
        if(array[i] != array[i-1]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}