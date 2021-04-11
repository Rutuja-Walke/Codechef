/*
Smartphone
Problem Code: ZCO14003
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    /*cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);*/
	ll n;
	cin>>n;
	vector<ll> arr;
	for(ll i=0; i<n; i++){
	    ll temp;
	    cin>>temp;
	    arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	ll ans = 0;
	for(ll i=0; i<n; i++)
	    ans = max(ans,(n-i)*arr[i]);

	cout<<ans<<endl;
	return 0;
}
