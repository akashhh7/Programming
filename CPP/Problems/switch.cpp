//calci using switch 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    char op;
    cout<<"select a mathematical operation(+,-,*,/)\n";
    cin>>op;

    switch(op){
        case '+':
        cout<<a+b<<'\n';
        break;

        case '-':
        cout<<a-b<<'\n';
        break;

        case '*':
        cout<<a*b<<'\n';
        break;

        case '/':
        cout<<a/b<<'\n';
        break;

        default:
        cout<<"pls select a valid mathematical operation\n";

    }

    return 0;
}