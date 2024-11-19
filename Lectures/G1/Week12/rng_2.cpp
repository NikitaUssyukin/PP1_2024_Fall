#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int rng() { // returns a random 4-digit number
    int num = rand();
    while(!(999 < num && num < 10000)) {
        num = rand();
    }
    return num;
}

int main() {

    srand(time(0));

    int n;
    cin >> n;

    while(n > 0) {

        cout << rng() << ' ';

        --n;
    }
    cout << endl;
    
    return 0;
}