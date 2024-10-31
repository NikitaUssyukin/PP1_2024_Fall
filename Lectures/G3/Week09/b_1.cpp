#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    int temp;
    while(cin >> temp) {
        v.push_back(temp);
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }

    return 0;
}