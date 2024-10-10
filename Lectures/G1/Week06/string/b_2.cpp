#include <iostream>

using namespace std;

int main() {
    
    // string errors:
    // string s1 = 'A'; // declaring a new string and giving it a char as a value
    // string s2 = 123; // trying to assign an integer to a string

    // however, this works:
    string s3;
    s3 = 'A';
    // it is allowed to create a new string and then assign a char to it

    cout << s3 << endl;

    return 0;
}