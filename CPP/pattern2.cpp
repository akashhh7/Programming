#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    string a;
    cin>>a;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1 || i==n || j==1 || j==m){
                cout<<a;
            }
            else { 
                cout<<" ";
            }
        }
        cout<<'\n';
    }
    
    return 0;
}