#include <iostream>

using namespace std;

int main() {

    int v, t;
    
    cin >> v >> t;

    if(v > 0) {
       cout << v * t % 109 << endl;
    }
    else if(v < 0) {
       v = -v; // making v positive
       cout << (109 - v * t % 109) % 109 << endl;
    }
    else { // if speed (v) is 0
        cout << 0 << endl;
    }

    return 0;
}