/*
example on how to use vector together with a function
*/

#include <iostream>
#include <vector>

using namespace std;

int calculateSum(vector<int> v) {
    int sum = 0;

    for(int i = 0; i < v.size(); ++i) {
        sum += v[i];
    }

    return sum;
}

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << calculateSum(v) << endl;

    return 0;
}