#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a1, a2, a3, a4;

    a4 = n % 10;
    n /= 10;
    
    a3 = n % 10;
    n /= 10;
    
    a2 = n % 10;
    n /= 10;
    
    a1 = n % 10;
    n /= 10;

    // cout << a1 << a2 << a3 << a4 << endl;

    cout << abs(a1 - a4) + abs(a2 - a3) + 1 << endl;

    return 0;
}

/*
a1 - a4 == -(a2 - a3)

*/