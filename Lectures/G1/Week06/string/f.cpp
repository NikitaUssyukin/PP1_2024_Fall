#include <iostream>

using namespace std;

int main() {

    string s = "hello";

    cout << s.size() << endl;
    s += 'o';
    cout << s.length() << endl; // same as s.size()
    cout << s.empty() << endl; // 1 - string is empty, 0 - not empty
    cout << s.capacity() << endl; // the "real" size of the string, i.e. its size in the memory of a computer
    cout << s.max_size() << endl; // maximum possible size for a string, i.e. how many characters it can hold

    return 0;
}