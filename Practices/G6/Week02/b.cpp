#include <iostream>

using namespace std;

int main() {

    int a;

    cin >> a;

    int oneCnt = 0;

    while(a > 0) {
        if(a % 2 == 1) ++oneCnt;
        a /= 2;
    }
    cout << oneCnt << endl;

    return 0;
}