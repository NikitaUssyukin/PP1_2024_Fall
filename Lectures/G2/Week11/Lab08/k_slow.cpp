#include <iostream>
#include <vector>

using namespace std;

int main() {

    freopen("k_input1.txt", "r", stdin);

    int n;
    cin >> n;

    vector<int> v;

    while(n > 0) {

        int x;
        cin >> x;

        v.push_back(x);

        --n;
    }    

    int maxArea = 0;

    for(int i = 0; i < v.size(); ++i) {
        for(int j = i; j < v.size(); ++j) {
            int minHeight = v[i];
            for(int k = i; k <= j; ++k) {
                minHeight = min(minHeight, v[k]);
                int width = k - i + 1;
                int area = minHeight * width;
                maxArea = max(maxArea, area);
            }
        }
    }

    cout << maxArea << endl;

    return 0;
}