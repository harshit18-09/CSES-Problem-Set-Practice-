#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    ll sum = t*(t+1)/2;
    
    vector<int> nums(t);
    ll check = 0;
    for(int i=0; i<t-1; i++){
        cin>>nums[i];
        check += nums[i];
    }

    cout<<sum-check<<endl;

    return 0;
}