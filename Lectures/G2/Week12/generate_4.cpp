#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int rng() { // generates random numbers between 0 and 1000
    int random_num = rand();
    while(!(1000 <= random_num && random_num < 10000)) {
        random_num = rand();
    }
    return random_num;
}

int main() {

    srand(time(0));

    int n;
    cin >> n; 

    vector<int> v(n); // vector with n elemenents, non-empty

    generate(v.begin(), v.end(), rng);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}