#include<iostream>
using namespace std;

int main(){
    int a,b;

    //Relational Operators
    cout<<"Relational Operators"<<endl;

    cout<<"Using 'Equals to' operator "<<endl;
    cout<<"Value of a: ";
    cin>>a;
    cout<<"Value of b: ";
    cin>>b;
    cout<<(a==b)<<endl<<endl;

    cout<<"Using 'Not Equals to' operator "<<endl;
    cout<<"Value of a: ";
    cin>>a;
    cout<<"Value of b: ";
    cin>>b;
    cout<<(a!=b)<<endl<<endl;

    cout<<"Using 'Greater than' operator "<<endl;
    cout<<"Value of a: ";
    cin>>a;
    cout<<"Value of b: ";
    cin>>b;
    cout<<(a>b)<<endl<<endl;

    cout<<"Using 'Less than' operator "<<endl;
    cout<<"Value of a: ";
    cin>>a;
    cout<<"Value of b: ";
    cin>>b;
    cout<<(a<b)<<endl<<endl;

    return 0;
}