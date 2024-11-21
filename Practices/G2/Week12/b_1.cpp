#include <iostream>
#include <cmath>

using namespace std;


int main() {

    int a;
    cin >> a;

    int root = sqrt(a);

    if(root * root == a) {
        cout << "Perfect\n";
    }
    else {
        cout << "Not perfect\n";
    }
    
}
