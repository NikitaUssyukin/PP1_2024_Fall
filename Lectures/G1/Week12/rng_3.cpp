#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int k;

int rng() { // returns a random 4-digit number
    return rand() % k;
}

int main() {

    srand(time(0));

    int n;
    cin >> n >> k;

    while(n > 0) {

        cout << rng() << ' ';

        --n;
    }
    cout << endl;
    
    return 0;
}