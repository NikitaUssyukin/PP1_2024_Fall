#include <iostream>

using namespace std;

struct product {
    string name;
    int price;
};

int main() {

    product p1; // object of the product structure

    p1.name = "Apple";
    p1.price = 10;

    cout << p1.name << ' ' << p1.price << endl;

    return 0;
}