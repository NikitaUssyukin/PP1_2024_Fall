#include <iostream>

using namespace std;

string isEven(int a) {
    if(a % 2 == 0) {
        return "Yes";
    }
    return "No";
}

int main() {

    int x;
    cin >> x;

    cout << isEven(x) << endl;

    return 0;
}