//sum of first n natural numbers

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int sum=0;
    int i=1;

    while (i<=n){

        sum += i;
        i++;

    }

    cout<<sum<<'\n';

    return 0;
}