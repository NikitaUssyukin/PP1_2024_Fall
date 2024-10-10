#include <iostream>

using namespace std;

int main() {
    string s = "cat";

    s.insert(2, "rpe");

    cout << s << endl;
    
    s.erase(2, 3);

    cout << s << endl;

    return 0;
}