#include <iostream>

using namespace std;

struct product { // struct declaration
    string name;
    int price;
};

int main() {

    product p1; // product object

    p1.name = "Cucumber";
    p1.price = 250;

    product p2 = p1;

    cout << p2.name << ' ' << p2.price << endl;

    return 0;
}