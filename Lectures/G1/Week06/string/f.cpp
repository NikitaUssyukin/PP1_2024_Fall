#include <iostream>

using namespace std;

int main() {

    string s = "helloo";

    cout << s.size() << endl;
    s += 'o';
    s += "oooooo";
    cout << s.length() << endl; // same as size
    cout << s.empty() << endl; // 1 - string is empty, 0 - not empty
    cout << s.capacity() << endl; // the "real" size of the string
    cout << s.max_size() << endl; // maximum possible size for a string, i.e. how many characters it can hold

    return 0;
}