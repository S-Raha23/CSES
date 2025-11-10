#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<long long> mpp;
    while(n--){
        int a;
        cin>>a;
        mpp.insert(a);
    }
    cout<<mpp.size();
}