//write a program to print the value if it is even and divisible by 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    n%6==0? cout<<n<<endl : cout<<"Invalid Input\n";//used ternary operator
    return 0;
}