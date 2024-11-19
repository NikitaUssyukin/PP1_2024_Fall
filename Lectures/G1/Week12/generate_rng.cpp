#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int rng() { // returns a random 4-digit number
    int num = rand();
    while(!(999 < num && num < 10000)) {
        num = rand();
    }
    return num;
}

int main() {

    srand(time(0));

    int n;
    cin >> n;

    vector<int> v(n); // vector with n elements

    generate(v.begin(), v.end(), rng);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}