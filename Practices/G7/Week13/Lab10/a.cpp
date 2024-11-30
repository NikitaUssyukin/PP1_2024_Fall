#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

struct point {
    int x, y;
};

point ref;

double calcDistance(point p) {
    double distance = sqrt(pow(ref.x - p.x, 2) + pow(ref.y - p.y, 2));
    return distance;
}

bool cmp(point p1, point p2) {
    return calcDistance(p1) < calcDistance(p2);
}

int main() {

    cin >> ref.x >> ref.y;

    int n;
    cin >> n;

    vector<point> v;

    while(n > 0) {

        point a;
        cin >> a.x >> a.y;

        v.push_back(a);

        --n;
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].x << ' ' << v[i].y << endl;
    }

    return 0;
}