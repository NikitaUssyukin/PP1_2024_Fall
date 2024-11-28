#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    string s1;
    string s2;

    cin >> s1 >> s2;

    cout << atoi(s1.c_str()) + atoi(s2.c_str()) << endl;

    return 0;
}