#include <iostream>

using namespace std;

int main() {

    char a = 'A';
    char *b = &a;

    cout << *b << endl;
    cout << int(*b) << endl;

    return 0;
}