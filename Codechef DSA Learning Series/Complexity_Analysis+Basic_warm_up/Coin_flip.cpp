/*
Coinflip
Problem Code: COINFLIP
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int G;
	    cin>>G;
	    while(G--){
	        int i,n,q;
	        cin>>i>>n>>q;
	        int ans;
	        if(n%2==0){
	            ans = n/2;
	        }
	        else{
	            if(i==q){
	                ans = n/2;
	            }
	            else{
	                ans = (n/2) + 1;
	            }
	        }
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
