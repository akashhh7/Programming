#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<j;
        }
        cout<<'\n';
    }
    
    cout<<'\n';

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if( i==1 || i==m || j==1 || j==n){
                cout<<j;
            }
            else {
                cout<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}