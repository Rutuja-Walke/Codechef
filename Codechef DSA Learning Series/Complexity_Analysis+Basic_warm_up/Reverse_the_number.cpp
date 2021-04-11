/*
Reverse The Number
Problem Code: FLOW007
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,i=0;
	cin>>t;
	vector<int> ans(t);
	while(i<t)
	{
	    int n;
	    cin>>n; 
	    int num=0;
	    while(n!=0)
	    {
	        int temp = n%10;
	        num = num*10 + temp;
	        n=n/10;
	    }
	    ans[i]=num;
	    i++;
	}
	for(int i=0; i<t;i++){
	    cout<<ans[i]<<endl;
	}
	return 0;
}
