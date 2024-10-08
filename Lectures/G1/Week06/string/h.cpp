#include <iostream>

using namespace std;

int main() {

    string s = "cat";

    s += "erpillar";

    cout << s << endl;
    
    s = "cat";

    s.append("erpillar");

    cout << s << endl;

    s = "cat";

    s.append(8, 't');

    cout << s << endl;

    return 0;
}