#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long prev,total=0;
    cin>>prev;
    for(int i=1;i<n;i++){
        long long a;
        cin>>a;
        if(a<prev){
            total+=prev-a;
        }else prev=a;
    }
    cout<<total;
}