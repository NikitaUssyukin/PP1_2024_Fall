#include <iostream>

using namespace std;

int main() {

    int a = 1;

    do {

        cout << "Inside the loop: " << a++ << endl;

    } while(a > 10);

    cout << "Outside the loop: " << a << endl;

    return 0;
}