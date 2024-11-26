#include <iostream>

using namespace std;

int main() {

    int a[5];

    for(int i = 0; i < 5; ++i) {
        cin >> *(a + i);
    }

    for(int i = 0; i < 5; ++i) {
        cout << "address: " << a + i << ", value: " << *(a + i) << endl;;
    }

    return 0;
}