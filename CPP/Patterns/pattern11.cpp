#include <bits/stdc++.h>
using namespace std;

int main() {
    long a;
    cin>>a;

    long b=0;

    while(a>0){
        int c=a%10;
        b=(b*10)+c;
        a/=10;
    }
    cout<<b<<'\n';
    return 0;
}