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
};

bool cmp(product p1, product p2) {
    return p1.name < p2.name; // sorting products by name alphabetically
}

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

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        v[i].output();
    }

    return 0;
}