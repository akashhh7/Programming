#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cout<<"Enter yout age: "; cin>>age;

    if(age < 12){
        cout<<"You are a CHILD\n";
    }
    else if(age<=18 && age >=12){
        cout<<"Your are a TEENAGER\n";
    }
    else {
        cout<<"You are an ADULT\n";
    }    
    return 0;
}