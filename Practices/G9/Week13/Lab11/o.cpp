#include <iostream>

using namespace std;

string shiftByK(string str, int k) {
    if(str.empty()) return "";
    string symbol;
    symbol = str[str.size() - 1];  // or str.back();
    str.erase(str.size() - 1, 1); // or str.pop_back();
    symbol[0] += k;
    if(symbol[0] > 'Z') symbol[0] = symbol[0] % 91 + 'A';
    return shiftByK(str, k) + symbol;
}

int main() {

    int k;
    cin >> k;

    string str;
    cin >> str;

    cout << shiftByK(str, k) << endl;

    return 0;
}