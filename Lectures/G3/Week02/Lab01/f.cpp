/*
5 5

1st day: 5    5
2nd day: 20   5 * 2 * 2
3rd day: 30   5 * 2 * 3
4th day: 40   5 * 2 * 4
5th day: 50   5 * 2 * 5

a = 2
d = 1
n = 4 (d_days - 1)
*/

#include <iostream>

using namespace std;

int main() {
    int n_rabbits;
    double d_days;

    cin >> n_rabbits >> d_days;

    cout << (int)(((d_days - 1) / 2) * (2 * 2 + (d_days - 2)) * n_rabbits * 2 + n_rabbits) << endl;
    // cout << int(((d_days - 1) / 2) * (2 * 2 + (d_days - 2)) * n_rabbits * 2 + n_rabbits) << endl;

    return 0;
}