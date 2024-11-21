#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int rng() {
    return rand();
}

int main() {

    srand(time(0));

    int n;
    cin >> n;
    vector<int> v(n); // vector with n elements, non-empty

    generate(v.begin(), v.end(), rng);
    
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}