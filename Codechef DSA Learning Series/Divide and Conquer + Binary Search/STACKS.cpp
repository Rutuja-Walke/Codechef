/*
Problem Code: STACKS
Link: https://www.codechef.com/LRNDSA04/problems/STACKS
*/

#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> &v, int key){
    int l=0;
    int r=v.size();
    int m;
    if(r==0) return -1;
    else if(key < v[0]) return 0;
    else if(key > v[v.size()-1]) return -1;
    while(r-l>1){
        m = l + (r-l)/2;
        if(v[m] > key) r=m;
        else l=m;
    }
    if(r==v.size()) return -1;
    return r;
}

int main() {
	int T; cin>>T;
	while(T--){
	    int n; cin>>n;
	    vector<int> st = {};
	    int tmp;
	    for(int i=0; i<n; i++){
	        cin>>tmp;
	        int index = binarysearch(st,tmp);
	        if(index != -1) st[index] = tmp;
	        else st.push_back(tmp);
	    }
	    cout<<st.size()<<" ";
	    for(auto x:st) cout<<x<<" ";
	    cout<<endl;
	}
	return 0;
}
