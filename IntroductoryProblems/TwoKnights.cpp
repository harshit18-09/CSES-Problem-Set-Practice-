#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    
    cout<<0<<endl;
    for(ll i=2; i<=t; i++){
        ll total = ((i*i*i*i) - (i*i))/2;
        ll notposs = 4*(i-1)*(i-2);
        ll poss = total - notposs;
        cout<<poss<<endl;
    }
    return 0;
}