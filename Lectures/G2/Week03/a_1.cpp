#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int index = 0;
    int lasfFoundSetBit = -1; // index of the last found 1 bit
                              // i.e. the leftmost 1 bit

    while(n > 0) {
        if(n % 2 == 1) {
            lasfFoundSetBit = index;
        }
        n /= 2; // n = n / 2
        ++index;
    }

    if(lasfFoundSetBit != -1) {
        cout << lasfFoundSetBit << endl;
    }
    else {
        cout << "No 1 bits in this number\n";
    }
    

    return 0;
}