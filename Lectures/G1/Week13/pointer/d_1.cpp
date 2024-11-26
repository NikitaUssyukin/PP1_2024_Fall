#include <iostream>

using namespace std;

int main() {

    char c = 'A';
    char *d = &c;
    
    cout << *d << endl;

    return 0;
}