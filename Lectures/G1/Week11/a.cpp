#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> st1;
    stack<int> st2;

    st1.push(1);
    st1.push(2);
    st2.push(3);

    st2 = st1;

    cout << (st1 == st2) << endl;

    return 0;
}