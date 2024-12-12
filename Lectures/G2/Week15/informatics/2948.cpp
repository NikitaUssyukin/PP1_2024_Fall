#include <iostream>

using namespace std;

int main() {

    int seconds;
    cin >> seconds;

    int h = seconds / 3600;
    int m = seconds / 60 % 60;
    int s = seconds % 60;

    cout << h << ':' << m / 10 << m % 10 << ':' << s / 10 << s % 10 << endl;

    return 0;
}

/*
 8 => 08
18 => 18

number n;

cout << n / 10 << n % 10;

8 / 10 == 0
8 % 10 == 8

18 / 10 == 1
18 % 10 == 8

*/