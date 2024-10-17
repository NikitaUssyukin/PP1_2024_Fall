#include <iostream>

using namespace std;

int main() {

    for(int i = 'a'; i <= 'z'; ++i) {
        char c = i; // implicit type casting
        cout << i << ' ' << c  << endl;
    }

    return 0;
}