/*
Chef and street food
Problem Code: STFOOD
*/



#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int res[n];
	    int ans = INT_MIN;
        int cost = 0;
	    for(int i=0; i<n; i++)
	    {
	        int s,p,v;
	        cin>>s>>p>>v;
	        int d = s+1;
	        if(p%d == 0)
	        {
	            res[i] = p/d;
	        }
	        else
	        {
	            res[i] = floor(p/d);
	        }

            cost = res[i] * v;	        
	        ans = max(ans, cost);
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
