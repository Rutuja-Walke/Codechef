#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
	int t;
	cin>>t;
	while(t--){
	   int n, pains_power;
	    cin>>n>>pains_power;
	    priority_queue<int> sp;
	    int s_count = 0;
	    
	    for(int i=0; i<n; i++){
	        int temp;
	        cin>>temp;
	        sp.push(temp);
	    }
	    
	    
	    while(pains_power > 0 && !sp.empty())
	    {
	        int power = sp.top();
	        pains_power -= power;
	        sp.pop();
	        power /= 2;
	        if(power > 0){
	            sp.push(power);
	        }
	        s_count++;
	    }
	    
	    if(pains_power <= 0){
	        cout<<s_count<<endl;
	    }
	    else{
	        cout<<"Evacuate"<<endl;
	    }
	}
	return 0;
}
