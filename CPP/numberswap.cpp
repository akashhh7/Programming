#include<iostream>
using namespace std;

int main (){ 
    int a;
    cout<<"enter the value of a: ";
    cin>>a;

    int b;
    cout<<"enter the value of b: ";
    cin>>b;

    int c;
    c=b;
    b=a;
    a=c;
    
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;

    cout<<endl;
    cout<<"This program swaps the values of a and b using a third variable c."<<endl; 

    return 0;

}