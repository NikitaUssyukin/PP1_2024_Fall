#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    int invertedNum = 0;
    int exp = 0;

    while(n > 0) {
        invertedNum += !(n % 2) * pow(2, exp++);
        n /= 2; // same n = n / 2
    }

    cout << invertedNum << endl;

    return 0;
}

