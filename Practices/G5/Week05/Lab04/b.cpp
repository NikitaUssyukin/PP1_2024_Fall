#include <iostream>

using namespace std;

int main() {

    int canvas[100][100] = {};

    int w, h;
    cin >> w >> h;

    int n;
    cin >> n;

    int paintedCnt = 0;

    while(n > 0) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i = y1; i < y2; ++i) {
            for(int j = x1; j < x2; ++j) {
                if(canvas[i][j] == 0) {
                    canvas[i][j] = 1;
                    ++paintedCnt;
                }
            }
        }
        
        --n;
    }

    cout << w * h - paintedCnt << endl;

    return 0;
}