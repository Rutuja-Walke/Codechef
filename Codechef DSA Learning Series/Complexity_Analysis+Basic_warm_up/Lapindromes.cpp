/*
Lapindromes
Problem Code: LAPIN
*/


#include <bits/stdc++.h>
using namespace std;

int test()
{
    string a, a1, a2;
    cin>>a;
    int length = a.length();
    int iter= length/2;
    int iter2 = iter;  //if even
              //= iter+1 // if odd
    if (length%2)
    {
        iter2++;
    }

    a1 = a.substr(0,iter);
    a2 = a.substr(iter2,iter);
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());

   //cout<<a1<<endl<<a2;
    if (a1==a2){printf("YES\n");}
    else printf("NO\n");

    return 0;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        test();
    }

    return 0;
}

