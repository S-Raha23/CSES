#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    cout << n;
    while (n != 1) {
        if (n & 1) n = 3 * n + 1;  // bitwise check for odd
        else n >>= 1;              // divide by 2 using bit shift
        cout << " " << n;
    }

}