#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> bugs;

    int n;
    cin >> n;

    while(n > 0) {

        string name, weakness;

        cin >> name >> weakness;

        bugs[weakness]++;

        --n;
    }

    int m;
    cin >> m;

    while(m > 0) {

        string name, ability;
        int amount;

        cin >> name >> ability >> amount;

        bugs[ability] -= amount;

        if(bugs[ability] < 0) bugs[ability] = 0;
        // another way to do the same thing:
        // bugs[ability] = max(bugs[ability], 0);

        --m;
    }

    int bugsLeft = 0;

    map<string, int>::iterator it;
    for(it = bugs.begin(); it != bugs.end(); ++it) {
        bugsLeft += it->second;
    }

    cout << "Bugs left: " << bugsLeft << endl;

    return 0;
}