#include <iostream>

using namespace std;

int main() {

    string s1 = "caterpillar";
    string s2(s1, 5, 4); 

    cout << s1 << ' ' << s2 << endl;

    return 0;
}