#include <iostream>

using namespace std;

struct product { // struct declaration
    string name;
    int price;

    bool operator == (product another) {
        return (this->name == another.name) && (this->price == another.price);
    }
};

int main() {

    product p1, p2;

    cin >> p1.name >> p1.price;
    cin >> p2.name >> p2.price;

    cout << (p1 == p2) << endl;

    return 0;
}