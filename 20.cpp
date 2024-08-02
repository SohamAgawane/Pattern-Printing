//  *        *
//  **      **
//  ***    ***
//  ****  ****
//  **********
//  ****  ****
//  ***    ***
//  **      **
//  *        *

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int initialSpaces = 2*n - 2;

    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        // Stars 
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        // Spaces -
        for(int j=1; j<=initialSpaces; j++){
            cout << " ";
        }
        // Stars -
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
        if(i < n) initialSpaces -= 2;
        else initialSpaces += 2;
    }
}    