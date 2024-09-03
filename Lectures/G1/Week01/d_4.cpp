#include <iostream> 

using namespace std; 

/*
fundamental data types in C++:

int, long
float, double
char
bool
*/

int main() { 

    int a;
    double b;
    char c;

    cin >> a;

    c = b = a; // = is an assignment operator
    // works from right to left

    cout << a << " " << b << " " << c << endl;
    
    return 0;
}