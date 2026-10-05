#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    string a;
    cin>>a;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<a;
        }
        cout<<'\n';
    }

    cout<<'\n';

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<'\n';
    }

    return 0;
}