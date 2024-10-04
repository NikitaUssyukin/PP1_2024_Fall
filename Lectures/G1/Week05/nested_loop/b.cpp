#include <iostream>

using namespace std;

int main() {

    int amountOfRepetitions = 1000;

    /*
    for 100:
    real    0m0.222s
    user    0m0.005s
    sys     0m0.007s  

    for 1000: 
    real    0m0.715s
    user    0m0.156s
    sys     0m0.030s  

    for 10000:
    real    0m53.722s
    user    0m15.240s
    sys     0m2.815s
    */

    for(int i = 1; i <= amountOfRepetitions; ++i) { // outer loop
        cout << "i: " << i << endl;
        cout << "j:\n";
        for(int j = 1; j <= amountOfRepetitions; ++j) { // inner loop
            cout << j << ' ';
        }
        cout << endl;
    }

    return 0;
}