#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;

    cin >> n;

    int root = sqrt(n);
    
    if(root * root == n) {
        cout << n << " is a square!\n";
    }
    else {
        cout << n << " is not a square!\n";
    }

    return 0;
}