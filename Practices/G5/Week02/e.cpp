#include <iostream>

using namespace std;

int main() {

    int start;
    int end;

    cin >> start >> end;

    while(true) {
        if(start % 2 == 0) {
            cout << start << " ";
        }
        ++start;

        if(start > end) { // loop stop condition
            break; // break keyword stops the loop entirely
        }
    }
    cout << endl;

    return 0;
}