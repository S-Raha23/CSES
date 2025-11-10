#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int total=0;
    for(int i=1;i<n;i++){
        int a;
        cin>>a;
        total=total^i^a;
    }
    total=total^n;
    cout<<total;
}