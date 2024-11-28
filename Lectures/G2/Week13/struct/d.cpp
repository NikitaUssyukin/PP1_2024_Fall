#include <iostream>
#include <vector>

using namespace std;

struct product { // struct declaration
    string name;
    int price;
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

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].name << ' ' << v[i].price << endl;
    }

    return 0;
}