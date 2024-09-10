#include <iostream>

using namespace std;

int main() {

    for(int n = 1;; ++n) {
        if(n > 10) {
            break;
        }
        if(n % 2 != 0) {
            continue;
        }
        cout << n << endl;
    }

    // this will give an error
    // cout << n << endl;
    
    return 0;
}