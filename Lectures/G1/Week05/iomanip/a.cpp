#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int width = 4;

    int a = 1;
    int b = 123;

    cout << a << endl;
    cout << b << endl;

    cout << endl;

    cout << setw(width) << a << endl;
    cout << setw(width) << b << endl;

    return 0;
}