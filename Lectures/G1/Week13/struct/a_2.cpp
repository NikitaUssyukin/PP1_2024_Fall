#include <iostream>

using namespace std;

struct product {
    string name;
    int price;
};

int main() {

    product p1; // object of the product structure

    cin >> p1.name >> p1.price;

    cout << p1.name << ' ' << p1.price << endl;

    return 0;
}