#include <iostream>

using namespace std;

int main() {

    for(int n = 1; n <= 10; ++n) {
        if(n % 2 == 0) {
            cout << n << endl;
        }
    }

    // this will give an error
    // cout << n << endl;
    
    return 0;
}