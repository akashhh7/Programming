//constant and vowel

#include <bits/stdc++.h>
using namespace std;

int main() {
    char alphabet;
    cout<<"Enter a letter: ";
    cin>>alphabet;

    switch(alphabet){
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
        cout<<"Vowel\n";
        break;

        default:
        cout<<"Consonants\n";
    }

    return 0;
}