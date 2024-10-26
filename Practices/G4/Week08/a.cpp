#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double a = 0.000012345;
    double b = 123456;

    cout << setprecision(2) << a << '\n' << b << endl;

    return 0;
}