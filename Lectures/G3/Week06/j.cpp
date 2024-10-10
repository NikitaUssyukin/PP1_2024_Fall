#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s = "elephant";

    sort(s.begin(), s.end());

    cout << s << endl;

    return 0;
}