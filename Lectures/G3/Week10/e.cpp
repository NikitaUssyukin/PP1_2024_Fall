#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    m["Cat"] = 5;
    m["Dog"] = 2;
    m["Parrot"] = 1;
    
    m["Bear"] = 1;
    
    m["Elephant"]; // similar to m["Elephant"] = 0;

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << ' ' << it->second << endl;
    }

    return 0;
}