#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[6];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cin>>arr[i];
    }

    int even=0;
    int odd=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(i%2==0){
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }
    }
    cout<<"Sum of even idx: "<<even<<'\n';
    cout<<"Sum of odd idx: "<<odd<<'\n';
    cout<<"Difference: "<<even-odd<<'\n';
    return 0;
}