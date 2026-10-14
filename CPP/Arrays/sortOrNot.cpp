#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[6];
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cin>>a[i];
    }
    // for(int e:a){
    //     cin>>e;
    // }
    
    bool sort=true;
    for(int i=1;i<6;i++){
        if(a[i]<=a[i-1]){
            sort=false;
            break;
        }
    }
    cout<<sort<<'\n';
    return 0;
}