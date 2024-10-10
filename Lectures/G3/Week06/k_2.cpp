#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string s = "fat cat carries a carpet";

    cout << s.find("cat") << endl;
    cout << s.find("car") << endl;
    cout << s.find("rat") << endl;
    cout << s.find("Cat") << endl;

    return 0;
}