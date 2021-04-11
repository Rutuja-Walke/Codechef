/*
Infix to Postfix
Problem Code: INPSTFIX
*/


#include <iostream>
#include <stack>
using namespace std;

int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}



int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        stack<char>st;
        string str;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                str+=s[i];
            else if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]==')')
            {
                while(!st.empty() && st.top()!='(')
                {
                    str+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while(!st.empty() && prec(st.top())>=prec(s[i]))
                {
                    str+=st.top();
                    st.pop();
                    
                }
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }
        cout<<str<<endl;
    }
	// your code goes here
	return 0;
}
