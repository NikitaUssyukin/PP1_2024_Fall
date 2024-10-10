#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    string s1 = "123 "; 
    string s2 = "456";

    int a, b;

    a = atoi(s1.c_str());
    b = atoi(s2.c_str());

    cout << a << ' ' << b;

    return 0;
}