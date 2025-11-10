#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long x;
    cin>>n>>x;
    map<long long ,long long> mpp;
    long long sum=0;
    long long ans=0;
    mpp[0]=1;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
        ans+=mpp[sum-x];
        mpp[sum]++;
    }
    cout<<ans;
}