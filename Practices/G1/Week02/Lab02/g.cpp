#include <iostream>

using namespace std;

int main() {

    int n; // number of steaks ordered
    int k; // number of spots for steaks on the chef's pan
    cin >> n >> k;

    int sides = n * 2;

    if(n <= k) {
        cout << 2 << endl;
    }
    else {
        cout << (sides / k + (sides % k) / (k / 2)) << endl;
        // you can try to solve this problem using double data type and round() function from <cmath>;
    }

    return 0;
}

/*
3 2
3

4 8
2

13 7
4
*/