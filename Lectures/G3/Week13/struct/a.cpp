#include <iostream>

using namespace std;

struct product {
    string name;
    int price;
};

int main() {

    product p1;

    p1.name = "Car";
    p1.price = 2000;

    cout << p1.name << endl;

    cout << p1.price << endl;

    return 0;
}