#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {

    string s;

    cin >> s;

    string num1, num2;

    string res;

    string temp;

    bool inputSwitch = true; // decides what string to use, num1 or num2;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '+') {
            inputSwitch = false;
            continue;
        }
        temp += s[i];
        if(temp.size() == 3) {
            char digit;
            if(temp == "ONE") {
                digit = '1';
            } 
            else if(temp == "TWO") {
                digit = '2';
            }
            else if(temp == "THR") {
                digit = '3';
            }
            else if(temp == "FOU") {
                digit = '4';
            }
            else if(temp == "FIV") {
                digit = '5';
            }
            else if(temp == "SIX") {
                digit = '6';
            }
            else if(temp == "SEV") {
                digit = '7';
            }
            else if(temp == "EIG") {
                digit = '8';
            }
            else if(temp == "NIN") {
                digit = '9';
            }
            else if(temp == "ZER") {
                digit = '0';
            }
            if(inputSwitch) {
                num1 += digit;
            }
            else {
                num2 += digit;
            }
            cout << num1 << ' ' << num2 << endl;
            temp.clear();
        }
    }

    stringstream ss;

    ss << num1 << ' ' << num2;

    int a, b;

    ss >> a >> b;

    int n = a + b;

    while(n > 0) {
        char dig = n % 10 + '0';
        res += dig;
        n /= 10;
    }

    reverse(res.begin(), res.end());

    for(int i = 0; i < res.size(); ++i) {
        char digit = s[i];
        if(digit == '1') {
            cout << "ONE";
        } 
        else if(digit == '2') {
            cout << "TWO";
        }
        // .
        // .
        // .
        // etc
    }

    
    return 0;
}