//decimal to binary

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a=0;
    int p=1;

    while(n>0){
        int b=n%2; //b is parity digit here
        a+=b*p;
        p*=10;
        n/=2;
    }
    cout<<a<<'\n';

    return 0;
}