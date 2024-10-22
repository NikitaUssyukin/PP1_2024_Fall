#include <iostream>

using namespace std;

int a = 5;

void print_a() {
    a *= 2;
    cout << a << endl;
}

int main() {

    print_a();

    cout << a << endl;

    return 0;
}