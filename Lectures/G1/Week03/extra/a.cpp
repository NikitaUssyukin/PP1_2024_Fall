#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n; // n can have any number of bits

    string result = "";

    // outputting bits in reverse
    while(n > 0) {
        result.insert(0, 1, (n % 2) + 48);
        n /= 2;
    }

    cout << result << endl;

    return 0;
}