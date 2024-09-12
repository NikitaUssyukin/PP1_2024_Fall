#include <iostream>

using namespace std;

int main() {

    int n_rabbits;
    double d_days;

    cin >> n_rabbits >> d_days;

    cout << (int)(((d_days - 1) / 2) * (2 * 2 + (d_days - 2))) * 2 * n_rabbits + n_rabbits;
    // same as
    // cout << int((((d_days - 1) / 2) * (2 * 2 + (d_days - 2))) * 2 * n_rabbits + n_rabbits);

    return 0;
}

/*
5 5

1st day: 5    5
2nd day: 20   5 * 2 * 2
3rd day: 30   5 * 2 * 3
4th day: 40   5 * 2 * 4
5th day: 50   5 * 2 * 5

a = 2
d = 1
n = d_days - 1
*/

