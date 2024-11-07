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

    cout << m["Cat"] << endl;
    cout << m["Dog"] << endl;
    cout << m["Parrot"] << endl;
    cout << m["Bear"] << endl;
    cout << m["Elephant"] << endl;

    return 0;
}