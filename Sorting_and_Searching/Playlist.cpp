#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> mpp;
    for(int i=0;i<n;i++) cin>>v[i];
    int l=0;
    int len=0;
    for(int r=0;r<n;r++){
        while(mpp[v[r]]!=0){
            
            mpp[v[l]]--;
            l++;
        }
        mpp[v[r]]++;
        len = max(len,r-l+1);
    }
    cout<<len;
}