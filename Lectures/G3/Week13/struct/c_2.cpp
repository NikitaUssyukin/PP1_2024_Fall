#include <iostream>

using namespace std;

struct product {
    string name;
    int price;

    product() { // constructor for struct product
        cin >> name >> price;
    }
};

int main() {

    product p1;

    cout << p1.name << endl;

    cout << p1.price << endl;

    return 0;
}