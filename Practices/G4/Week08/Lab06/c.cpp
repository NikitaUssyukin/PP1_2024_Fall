#include <iostream>

using namespace std;

int a_cnt[101];
int b_cnt[101];

// function to check the contents of counter arrays iteratively
// not needed for the solution, just can help to visualize
void logCnt(int numberOfElements) {
    cout << "---------------\n";
    for(int j = 0; j < numberOfElements; ++j) {
        cout << a_cnt[j] << ' ';
    }
    cout << endl;
    for(int j = 0; j < numberOfElements; ++j) {
        cout << b_cnt[j] << ' ';
    }
    cout << endl;
    cout << "---------------\n";
    string temp;
    getline(cin, temp);
}

int countPairsOfEqualElements(int a[], int b[], int n) {
    int pairsCnt = 0;
    
    for(int i = 0; i < n; ++i) {
        ++a_cnt[a[i]];
        ++b_cnt[b[i]];

        // logCnt(6);
    }

    for(int i = 1; i < 101; ++i) {
        pairsCnt += min(a_cnt[i], b_cnt[i]);
    }

    return pairsCnt;
}

int main() {

    int n;
    cin >> n;

    int a[n], b[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    cout << countPairsOfEqualElements(a, b, n) << endl;

    return 0;
}