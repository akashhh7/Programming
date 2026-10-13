#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3][3];

    for (int i=0; i<3; i++) {
        cout<<"v"<<i+1<<": ";
        for (int j=0; j<3; j++) {
            cin>>a[i][j];
        }
    }

    int det=(a[0][0]*(a[2][2]*a[1][1] - a[2][1]*a[1][2]) - a[0][1]*(a[2][2]*a[1][0] - a[2][0]*a[1][2]) + a[0][2]*(a[2][1]*a[1][0] - a[2][0]*a[1][1]));

    if (det!=0) {
        cout<<"LI\n";
    } else {
        cout<<"LD\n";
    }

    return 0;
}