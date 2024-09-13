#include <iostream>

using namespace std;

int main() {

    int start;
    int end;

    cin >> start >> end;

    while(start <= end) {
        if(start % 2 != 0) {
            ++start;
            continue; // continue keyword skips the current iteration
                      // of the loop
        }
        cout << start++ << " ";
    }
    cout << endl;

    return 0;
}