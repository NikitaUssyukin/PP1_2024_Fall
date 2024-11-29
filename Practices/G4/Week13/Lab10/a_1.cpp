#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

struct point {
    int x, y;
    double distance;

    void calcDistance(int p_x, int p_y) {
        distance = sqrt(pow(p_x - x, 2) + pow(p_y - y, 2));
    }

    void print() {
        cout << x << ' ' << y << endl;
    }
};

bool cmp(point p1, point p2) {
    return p1.distance < p2.distance;
}

int main() {

    point p;
    cin >> p.x >> p.y;

    int n;
    cin >> n;

    vector<point> v;

    while(n > 0) {

        point a;
        cin >> a.x >> a.y;

        a.calcDistance(p.x, p.y);

        v.push_back(a);

        --n;
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        v[i].print();
    }

    return 0;
}