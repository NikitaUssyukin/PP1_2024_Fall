#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {

    map<string, pair<double, int> > m;

    int n;
    cin >> n;

    while(n > 0) {

        string name;
        int grade;

        cin >> name >> grade;

        m[name].first += grade;
        m[name].second++;

        --n;
    }

    map<string, pair<double, int> >::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << ": ";
        double res = it->second.first / it->second.second;
        printf("%.3f\n", res);
    }

    return 0;
}