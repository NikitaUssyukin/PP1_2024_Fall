#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int h = n / 3600 % 24;
    int m = n / 60 % 60;
    int s = n % 60;

    cout << h << ':' << m / 10 << m % 10 << ':' << s / 10 << s % 10 << endl;

    return 0;
}

/*
 6 => 06
16 => 16

int n;

cout << n / 10 << n % 10;

 6 / 10 == 0
 6 % 10 == 6

16 / 10 == 1
16 % 10 == 6

*/