/*
Compilers and Parsers
Problem Code: COMPILER
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;   
    cin>>s;
    stack<char> st;
    int count = 0;
    
    for(int i=0;i<s.length();i++){
        if(s[i] == '<')
        {
            st.push(s[i]);    
        }
        else if(s[i] == '>'){
            if(st.empty()){
                break;
            }
            else{
                st.pop();
                if(st.empty())
                    count = i+1;
            }
        }
    }
    cout<<count<<endl;
}

int main() {
    
	int t;
	cin>>t;
	while(t--)
	    solve();
	    
	return 0;
}
