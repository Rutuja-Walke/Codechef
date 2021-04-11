/*
Penalty shoot out
Problem Code: PSHOT
*/


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    string str;
	    cin>>n>>str;
	    int leftA = n, leftB = n, a=0, b=0;
	    for(i=0; i<2*n;i++)
	    {
	        if(i%2 == 0)
	        {
	            leftA--;
	            if(str[i] == '1') a++;
	        }
	        else
	        {
	            leftB--;
	            if(str[i] == '1') b++;
	        }
	        
	        if((a+leftA) < b || (b + leftB) < a) {cout<<i+1<<endl; break; }
	        
	    }
	    
	    if(i==2*n) cout<<i<<endl;
	}
	return 0;
}
