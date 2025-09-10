#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        long long y,x;
        cin>>y>>x;

        long long m = max(y, x);
        long long result;

        if (m % 2 != 0) { // If max coordinate is odd
            if (y >= x) {
                result = (m - 1) * (m - 1) + x;
            } else {
                result = m * m - y + 1;
            }
        } else { // If max coordinate is even
            if (x >= y) {
                result = (m - 1) * (m - 1) + y;
            } else {
                result = m * m - x + 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}