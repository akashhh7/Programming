#include <bits/stdc++.h>
using namespace std;

int exp(int a, int b){
    int c=1;
    for(int i=1; i<=b; i++){
        c*=a;
    }
    return c;
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<exp(a,b)<<'\n';
    return 0;
}