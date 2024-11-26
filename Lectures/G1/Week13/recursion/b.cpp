#include <iostream>

using namespace std;

long long fibonacci(int n) {
    if(n == 1 || n == 0) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    int num;
    cin >> num;

    cout << fibonacci(num) << endl;

    return 0;
}