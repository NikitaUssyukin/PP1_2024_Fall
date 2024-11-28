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
};

int main() {

    vector<product> v;

    int n;
    cin >> n;

    while(n > 0) {
        
        product p1;
        p1.takeInput();

        v.push_back(p1);

        --n;
    }

    for(int i = 0; i < v.size(); ++i) {
        v[i].print();
    }

    return 0;
}