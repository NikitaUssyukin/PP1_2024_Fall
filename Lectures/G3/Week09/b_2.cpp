#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    int temp;
    while(cin >> temp) {
        if(temp == 0) break;
        v.push_back(temp);
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }

    return 0;
}