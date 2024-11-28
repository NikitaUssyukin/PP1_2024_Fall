#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> *v) {
    int sum = 0;

    for(int i = 0; i < (*v).size(); ++i) {
        sum += (*v)[i];
    }

    return sum;
}

int main() {

    int n;
    cin >> n;

    vector<int> v;

    while(n > 0) {

        int x;
        cin >> x;

        v.push_back(x);

        --n;
    }

    cout << sum(&v) << endl;

    return 0;
}