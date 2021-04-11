/*
Stupid Machine
Problem Code: STUPMACH
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n; cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    ll minm = INT_MAX;
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        minm = min(minm,arr[i]);
        ans+=minm;
    }
    cout<<ans<<endl;
    
}

#define ll long long

int main() {
    int t; cin>>t;
    while(t--)
        solve();
	return 0;
}
