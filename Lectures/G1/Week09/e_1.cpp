#include <iostream>

using namespace std;

int main() {

    pair<int, int> p1;

    p1 = make_pair(2, 3);

    cout << p1.first << ' ' << p1.second << endl;
    
    return 0;
}