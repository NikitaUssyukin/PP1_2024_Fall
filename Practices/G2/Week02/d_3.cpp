#include <iostream>

using namespace std;

int main() {

    int start, end;

    cin >> start >> end;

    for(int i = start; i < end; ++i) {
        if(i % 2 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}