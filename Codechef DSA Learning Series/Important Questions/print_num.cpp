#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    
    // a --> 97 b=98 c=99 d=100
    cout<<"\nTYPE 1:\n";
    for(int i= 'a'/'a'; i<= 'd'; i++)
    {
        cout<<i<<" ";
    }


    cout<<"\n\nTYPE 2:\n";
    string s = "**********";
    int l = s.length();
    for(int i = 'a'/'a'; i<= l*l; i++)
    {
        cout<<i<<" ";
    }
    return 0;
}