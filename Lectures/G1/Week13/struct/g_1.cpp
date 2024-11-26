#include <iostream>
#include <vector>
#include <algorithm>

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

    void takeInput() {
        cin >> name >> price >> quantity;
    }
    
    void output() {
        cout << name << ' ' << price << ' ' << quantity << endl;
    }

    bool operator < (product other) {
        return this->name < other.name;
    }
};

int main() {

    product p1;
    product p2;
    product p3;

    p1.takeInput();
    p2.takeInput();
    p3.takeInput();

    cout << (p1 < p2) << endl;
    cout << (p2 < p3) << endl;

    return 0;
}