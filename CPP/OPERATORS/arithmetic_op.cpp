#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;

    //summation
    cout<<"Adding two numbers"<<endl;
    cout<<"Enter your first number: ";
    cin>>num1;
    cout<<"Enter your second number: ";
    cin>>num2;
    cout<<"Sum of the numbers: "<<num1+num2<<endl<<endl;
    
    //subtraction
    cout<<"Subtracting two numbers"<<endl;
    cout<<"Enter your first number: ";
    cin>>num1;
    cout<<"Enter your second number: ";
    cin>>num2;
    cout<<"Difference of the numbers: "<<num1-num2<<endl<<endl;
    
    //multiplication
    cout<<"Multiplying two numbers"<<endl;
    cout<<"Enter your first number: ";
    cin>>num1;
    cout<<"Enter your second number: ";
    cin>>num2;
    cout<<"Multiplication of the numbers: "<<num1*num2<<endl<<endl;

    //division
    cout<<"Dividing two numbers"<<endl;
    cout<<"Enter your first number: ";
    cin>>num1;
    cout<<"Enter your second number: ";
    cin>>num2;
    cout<<"Division of the numbers: "<<num1/num2<<endl<<endl;
    
    //remainder
    cout<<"Remainder two numbers"<<endl;
    cout<<"Enter your first number: ";
    cin>>num1;
    cout<<"Enter your second number: ";
    cin>>num2;
    cout<<"Remainder of the numbers: "<<num1%num2<<endl<<endl;
    
    //increment decrement
    int num3;
    cout<<"Increment of a number"<<endl;
    cout<<"Enter your number: ";
    cin>>num3;
    cout<<"Increment of your number is: "<<++num3<<endl<<endl;

    cout<<"Decrement of a number"<<endl;
    cout<<"Enter your number: ";
    cin>>num3;
    cout<<"Decrement of your number is: "<<--num3<<endl<<endl;

    return 0;
}