// Name: Transform The Expression
// (Infix to Postfix)

#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if(c == '^') return 4;
    else if(c == '/' || c == '*') return 3;
    else if(c == '+' || c == '-') return 2;
    else return -1;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    string str;
	    stack<char> st;
	    
	    for(int i=0;i<s.length();i++)
	    {
	        if((s[i]>= 'a' && s[i]<= 'z') || (s[i]>='A' && s[i]<='Z'))
	        {
	            str += s[i];
	        }
	        else if(s[i] == '(')
	        {
	            st.push('(');
	        }
	        else if(s[i] == ')')
	        {   
	            while(!st.empty() && st.top() != '(')
	            {
	                char c = st.top();
	                str += c;
	                st.pop();
	            }
	            
	            if(st.top() == '(')
	            {
	                st.pop();
	            }
	        }
	        else
	        {
	            while(prec(s[i]) <= prec(st.top()) && !st.empty())
	            {
	                char c = st.top();
	                str += c;
	                st.pop();
	            }
	            st.push(s[i]);
	        }
	    }
	    
	    while(!st.empty())
	    {
	        char c = st.top();
	        str += c;
	        st.pop();
	    }
	    
	    cout<<str<<endl;
	}
	return 0;
}
