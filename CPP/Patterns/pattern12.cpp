//solution of series s=1-2+3-4+...n

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int s=0;

    for(int i=0; i<=n; i++){
        if(i%2!=0){
            s+=i;
        }
        else {
            s-=i;
        }
    }
    cout<<s<<'\n';
    return 0;
}