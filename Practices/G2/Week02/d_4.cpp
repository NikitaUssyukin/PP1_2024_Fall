#include <iostream>

using namespace std;

int main() {

    int start, end;

    cin >> start >> end;
    
    for(int i = start, j = end; i <= end && j >= start; ++i, --j) {
        if(i % 2 == 0) {
            cout << "i: " << i << ", j: " << j << endl;
        }
    }

    return 0;
}