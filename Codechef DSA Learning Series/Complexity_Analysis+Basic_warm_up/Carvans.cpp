/*
Carvans
Problem Code: CARVANS
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--)
	{
	    ll n;
	    ll c=0;
	    cin>>n;
	    int32_t a[n], ans;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ans=a[0];
	    for(int i=0;i<n;i++){
	        if(a[i]<=ans){
	            c++;
	            ans = a[i];
	        }
	        
	    }
	    cout<<c<<endl;
	    
	}
	return 0;
}
