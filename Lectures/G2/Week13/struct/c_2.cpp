#include <iostream>

using namespace std;

struct product { // struct declaration
    string name;
    int price;

    product() { // product initializer
        name = "none";
        price = 0;
    }
};

int main() {

    product p1; // product object

    cout << p1.name << ' ' << p1.price << endl;

    return 0;
}