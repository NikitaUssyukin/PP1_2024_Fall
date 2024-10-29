#include <iostream>

using namespace std;

int main() {

    pair<int, int> p1;

    int a, b;
    cin >> a >> b;

    p1 = make_pair(a, b);

    cout << p1.first << ' ' << p1.second << endl;
    
    return 0;
}