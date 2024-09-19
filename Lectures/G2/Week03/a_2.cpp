#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int index = 0;
    int lasfFoundSetBit = 0; // index of the last found 1 bit
                             // i.e. the leftmost 1 bit
    if(n == 0) {
        cout << "No 1 bits in this number\n";
        return 0; // stops the program
    }

    while(n > 0) {
        if(n % 2 == 1) {
            lasfFoundSetBit = index;
        }
        n /= 2; // n = n / 2
        ++index;
    }

    cout << lasfFoundSetBit << endl;

    return 0;
}