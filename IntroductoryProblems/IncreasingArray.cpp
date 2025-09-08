#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    ll c = 0;
    for(int i=0; i<n-1; i++){
        if(nums[i] > nums[i+1]){
            c += (nums[i] - nums[i+1]);
            nums[i+1] += (nums[i]-nums[i+1]);
        }
    }
    cout<<c<<endl;
    
    return 0;
}