#include <iostream>

using namespace std;

int main() {

    string s = "pigeon";
    s.append(3, 's');
    cout << s << endl;

    s = "car";
    s.append("pet"); // same as concatenation, i.e. s += "pet"
    cout << s << endl;

    s = "car";
    s.append("petrol", 0, 3);
    cout << s << endl;

    s = "car";
    string t = "pet";
    s.append(t.begin(), t.end());
    cout << s << endl;

    s = "car";
    t = "petrol";
    s.append(t.begin(), t.end() - 3);
    cout << s << endl;

    return 0;
}