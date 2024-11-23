#include <iostream>
#include <map>

using namespace std;

int main() {

    int n;
    cin >> n;

    map<pair<pair<string, int>, pair<string, int> >, int> m;

    while(n > 0) {

        string name1, name2;
        int score1, score2;

        cin >> name1 >> score1 >> name2 >> score2;

        m[make_pair(make_pair(name1, score1), make_pair(name2, score2))] = score1 + score2;

        --n;
    }

    map<pair<pair<string, int>, pair<string, int> >, int>::iterator it;

    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first.first.first << " and " << it->first.second.first << ' ' << it->second << endl;
    }

    return 0;
}