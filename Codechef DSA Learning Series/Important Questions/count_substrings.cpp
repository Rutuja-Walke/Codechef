/* Problem: Count number of substrings that begin and end with 1 
   Problem code: CSUB
   Link: https://www.codechef.com/problems/CSUB
   */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n; cin>>n;
	    string str; cin>>str;
	    ll m = 0; 
 

   for (ll i=0; i<n; i++)
   {
        if (str[i] == '1')
           m++;
   }
 
   cout<<m*(m+1)/2<<endl;
	    
	}
	return 0;
}
