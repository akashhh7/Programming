//convert binary to decimal form

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a=0;
    int p=1;
    while(n>0){
        int c=n%10;
        a+=c*p;
        p*=2;
        n/=10;
    }
    cout<<a<<'\n';
    return 0;
}