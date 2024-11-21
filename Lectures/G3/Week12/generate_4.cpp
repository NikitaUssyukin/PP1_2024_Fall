#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int rng() {
    int random_num = rand();
    while(!(1000 <= random_num && random_num < 10000)) {
        random_num = rand();
    }
    return random_num; // limits the range of random numbers to [0; 10000)
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