#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;

    long long maxi = 0;
    for(int i=0; i<s.length(); i++){
        long long curr = 1;
        while(s[i] == s[i+1]){
            curr++;
            i++;
        }
        maxi = max(curr, maxi);
    }
    cout<<maxi<<endl;
    
    return 0;
}