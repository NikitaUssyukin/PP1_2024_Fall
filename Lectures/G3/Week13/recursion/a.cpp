#include <iostream>

using namespace std;

long long factorial(int n) {
    // base case
    if(n == 1 || n == 0) return 1;
    // recursive call with problem reduction
    return n * factorial(n - 1);
}

int main() {

    int n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}