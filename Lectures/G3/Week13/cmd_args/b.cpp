#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {

    string op = argv[2];
    int a = atoi(argv[1]);
    int b = atoi(argv[3]);

    if(op == "+") {
        cout << a + b << endl;
    }
    if(op == "-") {
        cout << a - b << endl;
    }
    if(op == "*") {
        cout << a * b << endl;
    }

    return 0;
}