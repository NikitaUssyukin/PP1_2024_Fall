#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int vSum(vector<int> v) {
    int sum = 0;
    for(int i = 0; i < v.size(); ++i) {
        sum += v[i];
    }
    return sum;
}

bool cmp(vector<int> v1, vector<int> v2) {

    int sumV1 = vSum(v1);
    int sumV2 = vSum(v2);
    
    if(sumV1 != sumV2) return sumV1 < sumV2;
    
    if(v1.size() != v2.size()) return v1.size() < v2.size();
    
    for(int i = 0; i < v1.size(); ++i) {
        if(v1[i] != v2[i]) return v1[i] < v2[i];
    }
    
    return false;
}

int main() {

    int n;
    cin >> n;

    vector<vector<int> > v(n);

    for(int i = 0; i < v.size(); ++i) {

        int m;
        cin >> m;

        while(m > 0) {
            
            int x;
            cin >> x;

            v[i].push_back(x);

            --m;
        }
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        for(int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
