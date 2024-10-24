#include <iostream>

using namespace std;

int a; // global variable

void print_a() {
    cout << a << endl;  
}

int main() {

    cin >> a;

    print_a();

    return 0;
}