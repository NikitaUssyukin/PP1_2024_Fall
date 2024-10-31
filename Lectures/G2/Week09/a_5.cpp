#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v1;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    vector<int> v2(v1.begin() + 1, v1.end() - 1);

    for(int i = 0; i < v2.size(); ++i) {
        cout << v2[i] << ' ';
    }
    cout << endl;

    return 0;
}