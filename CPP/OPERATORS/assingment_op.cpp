#include<iostream>
using namespace std;

int main(){

    int p,q;
    cout<<"Using '+=' assingment operator"<<endl;
    cout<<"p: ";
    cin>>p;
    cout<<"p+=: ";
    cin>>q;
    (p+=q);
    cout<<"p = p + "<<q<<" = "<<p<<endl<<endl;

    cout<<"Using '-=' assingment operator"<<endl;
    cout<<"p: ";
    cin>>p;
    cout<<"p-=: ";
    cin>>q;
    (p-=q);
    cout<<"p = p - "<<q<<" = "<<p<<endl<<endl;

    cout<<"Using '/=' assingment operator"<<endl;
    cout<<"p: ";
    cin>>p;
    cout<<"p/=: ";
    cin>>q;
    (p/=q);
    cout<<"p = p / "<<q<<" = "<<p<<endl<<endl;

    cout<<"Using '%=' assingment operator"<<endl;
    cout<<"p: ";
    cin>>p;
    cout<<"p%=: ";
    cin>>q;
    (p%=q);
    cout<<"p = p % "<<q<<" = "<<p<<endl;

    return 0;
}