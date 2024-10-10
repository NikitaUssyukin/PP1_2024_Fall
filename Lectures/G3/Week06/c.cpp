#include <iostream>

using namespace std;

int main() {

    string s;

    cout << s.size() << endl;
    cout << s.empty() << endl;

    s = "hello";
    
    cout << s.size() << endl;
    cout << s.empty() << endl;
    cout << s.capacity() << endl;
    s += 'o';
    cout << s.length() << endl; // identical to size()
    cout << s.capacity() << endl; // return us the "real" size of the string, i.e. the size of the string in the memory of a computer
    cout << s.max_size() << endl; // returns the maximum possible size of tht string

    return 0;
}