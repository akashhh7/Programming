#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for(int i=0; i<4; i++){
        int n;
        cin>>n;
        v.push_back(n);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<'\n';

    v.insert(v.begin()+3, 7);
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<'\n';

    v.erase(v.end()-4);
    int id=0;
    while(id<4){
        cout<<v[id++]<<" ";
    }

    cout<<'\n';
    return 0;
}
