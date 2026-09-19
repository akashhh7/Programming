#include<iostream>
using namespace std;

int main (){
    int t;
    cin>>t;

    int s=0;
    do{
        int n;
        cin>>n;
        s+=n;
        t--;
    }
    while(t>0);

    cout<<s<<'\n';

    return 0;
}