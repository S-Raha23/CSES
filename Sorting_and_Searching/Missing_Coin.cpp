#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    long long curr=1;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(v[i]>curr){
            cout<<curr;
            flag=true;
            break;
        }
        curr+=v[i];
    }

    if(!flag) cout<<curr;
}