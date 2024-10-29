#include <iostream>
#include <vector>

using namespace std;

int main() {

    // template for declaring containers in STL (except map):
    // container_type<data_type> container_name;

    vector<int> v; // declaring an empty vector with int data type

    int n;
    cin >> n;    

    cout << v.empty() << endl;
    cout << v.size() << endl;

    for(int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }

    return 0;
}