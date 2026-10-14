#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    cout<<"Size: "<<v.size()<<'\n';
    cout<<"Capacity: "<<v.capacity()<<'\n';

    v.push_back(1);
    cout<<"Size: "<<v.size()<<'\n';
    cout<<"Capacity: "<<v.capacity()<<'\n';

    v.push_back(2);
    cout<<"Size: "<<v.size()<<'\n';
    cout<<"Capacity: "<<v.capacity()<<'\n';

    v.push_back(3);
    cout<<"Size: "<<v.size()<<'\n';
    cout<<"Capacity: "<<v.capacity()<<'\n';

    v.resize(10);
    cout<<"Size: "<<v.size()<<'\n';
    cout<<"Capacity: "<<v.capacity()<<'\n';

    v.resize(25);
    cout<<"Size: "<<v.size()<<'\n';
    cout<<"Capacity: "<<v.capacity()<<'\n';

    v.pop_back();
    v.pop_back();
    cout<<"Size: "<<v.size()<<'\n';
    cout<<"Capacity: "<<v.capacity()<<'\n';

    return 0;
}

