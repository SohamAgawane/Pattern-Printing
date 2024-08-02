//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *
//  * * * * * * * * * 
//    * * * * * * *
//      * * * * *
//        * * *
//          *

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        // Space
        for(int j=1; j<=n-i-1; j++){
            cout << " ";
        }
        // Star
        for(int j=1; j<=2*i+1; j++){
            cout << "*";
        }
        // Space
        for(int j=1; j<=n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }

    for(int i=1; i<=n; i++){
        // Space
        for(int j=i-1; j>=1; j--){
            cout << " ";
        }
        // Star
        for(int j=(2*n)-1; j>=2*i-1; j--){
            cout << "*";
        }
        // Space
        for(int j=i-1; j>=1; j--){
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
