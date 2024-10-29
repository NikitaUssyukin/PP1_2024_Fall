#include <iostream>
#include <vector>

using namespace std;

int main() {

    // template for declaring containers in STL (except map):
    // container_type<data_type> container_name;

    vector<int> v; // declaring an empty vector with int data type
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }

    return 0;
}