#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int s=0;

    while(n>0){
        int a=n%10;
        s+=a;
        n/=10;
    }

    cout<<s<<'\n';
    return 0;
}