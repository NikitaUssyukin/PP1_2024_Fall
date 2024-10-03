#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a = 1, b = 12, c = 123;

    int width = 4;

    cout << setw(width) << a;
    cout << setw(width) << b;
    cout << setw(width) << c;
    cout << endl;

    return 0;
}