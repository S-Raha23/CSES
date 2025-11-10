#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    multiset<int> mt;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;

        auto it=mt.upper_bound(a);
        if(it!=mt.end()){
            mt.erase(it);

        }
        mt.insert(a);
    }
    cout<<mt.size();
}