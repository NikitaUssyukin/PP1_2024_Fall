#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int k;
    cin >> k;

    srand(k);

    int n; 
    cin >> n;

    while(n > 0) {
        
        cout << rand() << ' ';

        --n;
    }

    return 0;
}