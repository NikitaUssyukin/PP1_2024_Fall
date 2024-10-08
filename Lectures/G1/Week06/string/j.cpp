#include <iostream>

using namespace std;

int main() {

    string s = "cat";

    s.insert(2, "rro");

    cout << s << endl;

    s.erase(2, 3);

    cout << s << endl;

    s.erase();

    cout << s << endl;
    cout << s.empty() << endl;
    
    return 0;
}