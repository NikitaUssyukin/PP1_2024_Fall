#include <iostream>

using namespace std;

int main() {

    for(int i = 'a'; i <= 'z'; ++i) {
        cout << i << ' ' << char(i) << endl;
                // same as (char)i
                // both are explicit type casting
    }

    return 0;
}