#include <iostream>

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
};

int main() {

    product p1;

    p1.takeInput();

    p1.print();

    return 0;
}