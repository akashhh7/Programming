#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    string a;
    cin>>a;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<" "<<a;
        }
        cout<<endl;
    }
    return 0;
}