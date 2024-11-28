#include <iostream>

using namespace std;

struct product {
    string name;
    int price;
};

int main() {

    product p1;

    cin >> p1.name >> p1.price;

    cout << p1.name << endl;

    cout << p1.price << endl;

    return 0;
}