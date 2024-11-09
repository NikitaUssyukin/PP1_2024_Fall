#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {

    map<string, set<int> > m;

    // srting name;
    // int date;
    // cin >> name >> date;
    // m[name].insert(date);

    m["Cat"].insert(5);
    m["Dog"].insert(2);
    m["Parrot"].insert(1);
    m["Cat"].insert(5);
    m["Dog"].insert(3);
    m["Parrot"].insert(5);

    map<string, set<int> >::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << ' ' << it->second.size() << endl;
    }

    return 0;
}