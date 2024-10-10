#include <iostream>

using namespace std;

int main() {

    string s1 = "cat"; // " - double quotes for string data type
    string s2 = s1;
    string s3 = s1;

    cout << s1 << ' ' << s2 << ' ' << s3 << endl;

    s2[0] = s3[2] = 'r'; // ' - single quotes for char data type

    cout << s1 << ' ' << s2 << ' ' << s3 << endl;

    return 0;
}