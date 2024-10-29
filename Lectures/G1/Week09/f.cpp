#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, int> m;
    
    m[1] = 9;
    m[2] = 4;
    m[3] = 5;

    cout << m[1] << endl;
    cout << m[2] << endl;
    cout << m[3] << endl;

    return 0;
}