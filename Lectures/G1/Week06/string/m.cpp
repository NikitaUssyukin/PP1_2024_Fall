#include <iostream>

using namespace std;

int main() {

    string s = "carpet";

    s.erase(s.begin() + 2, s.end() - 1);

    cout << s << endl;
    
    return 0;
}