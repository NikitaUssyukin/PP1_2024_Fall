#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    m["Cat"] = 10;
    m["Parror"] = 3;
    m["Bear"] = 1;
    // m["Cat"] = 5;
 
    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
    
