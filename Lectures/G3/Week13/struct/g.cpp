#include <iostream>
#include <vector>
#include <algorithm>

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

    bool operator < (product another) {
        if(this->name != another.name) return this->name < another.name;
        return this->price < another.price;
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

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i) {
        v[i].print();
    }

    return 0;
}