#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>m;

    int a=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==m){
            a=i;
            break;
        }
    }
    cout<<a<<'\n';
    return 0;
}