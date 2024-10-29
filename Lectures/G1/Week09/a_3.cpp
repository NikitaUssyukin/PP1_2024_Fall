#include <iostream>
#include <vector>

using namespace std;

int main() {

    // template for declaring containers in STL (except map):
    // container_type<data_type> container_name;

    int n;
    cin >> n;

    vector<int> v(n); // declaring a vector with n elements with int data type
    
    cout << v.empty() << endl;
    cout << v.size() << endl;

    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }

    return 0;
}