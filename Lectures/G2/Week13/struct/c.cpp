#include <iostream>

using namespace std;

struct product { // struct declaration
    string name;
    int price;
};

int main() {

    product p1; // product object

    cin >> p1.name >> p1.price;

    cout << p1.name << ' ' << p1.price << endl;

    return 0;
}