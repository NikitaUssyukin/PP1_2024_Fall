#include <iostream>

using namespace std;

struct product {
    string name;
    int price;

    product() { // constructor for struct product
        name = "none";
        price = 0;
    }
};

int main() {

    product p1;

    // cin >> p1.name >> p1.price;

    cout << p1.name << endl;

    cout << p1.price << endl;

    return 0;
}