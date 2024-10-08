#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int h = n;
    int w = n * 2 - 1;

    char a[h][w];

    for(int i = 0; i < n; ++i) {
        int dotCount = n - i - 1;
        int starCount = 2 * (i + 1) - 1;
        for(int j = 0; j < dotCount; ++j) { // outputs n - i dots
            a[i][j] = '.';
        }
        for(int j = dotCount; j < dotCount + starCount; ++j) { // outputs 2 * i - 1 stars
            a[i][j] = '*';
        }
        for(int j = dotCount + starCount; j <= w; ++j) { // outputs n - i dots
            a[i][j] = '.';
        }
    }

    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}