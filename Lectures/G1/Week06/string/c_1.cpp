#include <iostream>

using namespace std;

int main() {

    string s1 = "cat";
    string s2 = s1;
    string s3 = s1;

    s2[0] = s3[2] = 'r';

    cout << s1 << ' ' << s2 << ' ' << s3 << endl;

    return 0;
}