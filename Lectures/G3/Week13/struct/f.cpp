#include <iostream>
#include <vector>

using namespace std;

struct product {
    string name;
    int price;

    product() { // constructor for struct product
        name = "none";
        price = 0;
    }

    void takeInput() {
        cin >> name >> price;
    }

    void print() {
        cout << name << ' ' << price << endl;
    }

    bool operator == (product another) {
        return (this->name == another.name) && (this->price == another.price);
    }
};

int main() {

    product p1, p2;
    p1.takeInput();
    p2.takeInput();

    cout << (p1 == p2) << endl;

    return 0;
}