#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main() {

    string s1 = "123";
    string s2 = "456";

    cout << atoi(s1.c_str()) + atoi(s2.c_str()) << endl;
    
    return 0;
}