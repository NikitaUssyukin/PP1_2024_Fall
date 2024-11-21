#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int k;
    cin >> k;

    int n;
    cin >> n;

    srand(k);

    while(n > 0) {
        
        cout << rand() << ' ';
        --n;

    }
    cout << endl;

    return 0;
}