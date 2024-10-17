#include <iostream>
#include <sstream>

using namespace std;

int main() {
    stringstream ss;

    string s;

    getline(cin, s);

    ss << s; 

    int cnt = 0;

    string temp;

    while(ss >> temp) ++cnt;

    cout << cnt << endl;

    return 0;
}