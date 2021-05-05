/* Given a string, task is to find total number of all substrings such that:
   the begining and end of the substring are same.

   EX:  s = "abca", answer = 5.
             i  j

   soln: using two pointers i and j. i placed at 0th index and j placed at last index.
   A--> i+1, j
   B--> I, j-1
   A and B --> i+1, j-1

   A U B = A +B - A intersection B
   A or B --> Final Solution
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

int substrings(string str, int i, int j, int n)
{
    if(n==1) return 1;
    if(n<=0) return 0;

    int res = substrings(str,i+1,j,n-1) + substrings(str,i,j-1,n-1) - substrings(str,i+1,j-1,n-2);

    if(str[i] == str[j]) res++;

    return res;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    string s = "abca";
    cout<<substrings(s,0,s.length()-1,s.length());
    
    return 0;
}