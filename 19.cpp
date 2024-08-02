//   **********
//   ****  ****
//   ***    ***
//   **      **
//   *        *
//   *        *
//   **      **
//   ***    ***
//   ****  ****
//   **********

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int initialSpaces = 0;
    
    for(int i=0; i<n; i++){
        // Stars 
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        // Spaces -
        for(int j=0; j<initialSpaces; j++){
            cout << " ";
        }
        // Stars -
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        initialSpaces += 2;
        cout << endl;
    }

    initialSpaces = 2*n - 2;
    
    for(int i=1; i<=n; i++){
        // Stars 
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        // Spaces -
        for(int j=0; j<initialSpaces; j++){
            cout << " ";
        }
        // Stars -
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        initialSpaces -= 2;
        cout << endl;
    }
}    


