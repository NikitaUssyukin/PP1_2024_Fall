#include <iostream>

using namespace std;

int main() {

    int amountOfRepetitions;

    cin >> amountOfRepetitions;

    for(int i = 1; i <= amountOfRepetitions; ++i) {
        cout << "i: " << i << endl;
        cout << "j:\n";
        for(int j = 1; j <= amountOfRepetitions; ++j) {
            cout << j << ' ';
        }
        cout << endl;
    }

    return 0;
}