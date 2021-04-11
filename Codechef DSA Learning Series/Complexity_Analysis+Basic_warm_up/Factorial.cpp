/*
Factorial
Problem Code: FCTRL
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
	    ll n, tz=0;
	    cin>>n;
	    for (int i = 5; n / i >= 1; i *= 5) 
	        tz += (n / i);
	    
	    cout<<tz<<endl;
	}
	return 0;
}
