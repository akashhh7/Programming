//write a program to print the value if it is divisible by 3 or 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    if((n%3==0)||(n%5==0)){
        cout<<n<<endl;
    }
    else {
        cout<<"Invalid Input\n";
    }
    return 0;
}