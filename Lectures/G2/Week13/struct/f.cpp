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
};

int main() {

    vector<product> v;

    int n;
    cin >> n;

    while(n > 0) {
        
        product p1;
        cin >> p1.name >> p1.price;
        v.push_back(p1);
        
        --n;
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].name << ' ' << v[i].price << endl;
    }

    return 0;
}