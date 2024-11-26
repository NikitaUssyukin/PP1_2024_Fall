#include <iostream>

using namespace std;

struct product {
    string name;
    int price;
    int quantity;
};

int main() {

    product p1; // object of the product structure

    cin >> p1.name >> p1.price >> p1.quantity;

    product p2 = p1;

    cout << p1.name << ' ' << p1.price << ' ' << p1.quantity << endl;
    cout << p2.name << ' ' << p2.price << ' ' << p2.quantity << endl;

    return 0;
}