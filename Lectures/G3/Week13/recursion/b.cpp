#include <iostream>

using namespace std;

long long fibonacci(int n) {
    // base case
    if(n == 1 || n == 0) return n;
    // recursive call with problem reduction
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    int n;
    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}