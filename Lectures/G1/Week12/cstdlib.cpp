#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int seed;
    cin >> seed;

    srand(seed);

    int n;
    cin >> n;

    while(n > 0) {

        cout << rand() << ' ';

        --n;
    }
    cout << endl;
    
    return 0;
}