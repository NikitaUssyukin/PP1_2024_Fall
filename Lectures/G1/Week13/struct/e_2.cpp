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
    
    void output() {
        cout << name << ' ' << price << ' ' << quantity << endl;
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
        v[i].output();
    }

    return 0;
}