//  ABCDE      
//  ABCD
//  ABC
//  AB
//  A


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=n; i>=0; i--) {
        // Numbers 
        for(char ch='A'; ch<='A'+i-1; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }    
    return 0;
}