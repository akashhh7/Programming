#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(7);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x;
    cin>>x;

    //position of x
    int a=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            a=i;
        }
    }

    int b=-1;
    for(int j=v.size()-1;j>=0;j--){
        if(v[j]==x){
            b=j;
            break;
        }

    }
    cout<<a<<'\n';
    cout<<b<<'\n';

    //no. of x
    int c=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            c++;
        }
    }
    cout<<c<<'\n';

    //no. of ele greater than x
    int d=0;
    for(int e:v){
        if(e>x){
            d++;
        }
    }
    cout<<d<<'\n';
    return 0;
}