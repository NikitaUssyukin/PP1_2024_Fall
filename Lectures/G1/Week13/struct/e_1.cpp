#include <iostream>
#include <vector>

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
};

int main() {

    vector<product> v;

    int n;
    cin >> n;

    while(n > 0) {
        
        product p;
        p.takeInput();
        v.push_back(p);

        --n;
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].name << ' ' << v[i].price << ' ' << v[i].quantity << endl;
    }

    return 0;
}