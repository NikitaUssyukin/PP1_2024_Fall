#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    srand(time(0));

    int n;
    cin >> n;

    while(n > 0) {

        cout << rand() << ' ';

        --n;
    }
    cout << endl;
    
    return 0;
}