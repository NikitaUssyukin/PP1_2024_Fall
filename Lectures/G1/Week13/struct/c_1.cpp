#include <iostream>

using namespace std;

struct product {
    string name;
    int price;
    int quantity;

    product() {
        name = "none";
        price = 0;
        quantity = 0;
    }
};

int main() {

    product p1; // object of the product structure

    cout << p1.name << ' ' << p1.price << ' ' << p1.quantity << endl;

    return 0;
}