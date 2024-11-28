#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct product { // struct declaration
    string name;
    int price;

    bool operator < (product another) {
        if(this->name != another.name) return this->name < another.name;
        return this->price < another.price;
    }

    void read() {
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
        p1.read();
        v.push_back(p1);
        
        --n;
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i) {
        v[i].print();
    }

    return 0;
}