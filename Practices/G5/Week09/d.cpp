#include <iostream>

using namespace std;

int main() {

    pair<int, int> p1;
    pair<string, double> p2;

    p1 = make_pair(10, 100);
    p2 = make_pair("Pi", 3.14);

    cout << p1.first << ' ' << p1.second << endl;
    cout << p2.first << ' ' << p2.second << endl;

    return 0;
}