#include<iostream>
using namespace std;

int main(){

    //Logical Operators
    cout<<"Logical Operators"<<endl<<endl;

    bool exp1, exp2;

    cout<<"Logical OR"<<endl;
    cout<<"exp1(true(1)/false(0)): ";
    cin>>exp1;
    cout<<"exp2(true(1)/false(0)): ";
    cin>>exp2;
    cout<<(exp1||exp2)<<endl<<endl;

    cout<<"Logical AND"<<endl;
    cout<<"exp1(true(1)/false(0)): ";
    cin>>exp1;
    cout<<"exp2(true(1)/false(0)): ";
    cin>>exp2;
    cout<<(exp1&&exp2)<<endl<<endl;

    cout<<"Logical NOT"<<endl;
    bool exp3;
    cout<<"exp3(true(1)/false(0)): ";
    cin>>exp3;
    cout<<(!exp3)<<endl;
    
    return 0;

}
