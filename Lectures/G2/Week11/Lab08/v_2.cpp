#include <iostream>
#include <deque>

using namespace std;

deque<int> generateDeque(int n) {
    deque<int> dq;

    while(n > 0) {

        dq.push_front(n);

        for(int i = 0; i < n % dq.size(); ++i) {
            // dq.back() - value of the last element
            dq.push_front(dq.back()); 
            dq.pop_back(); // deletes the last element
        }

        --n;
    }

    return dq;
}

int main() {

    int t;
    cin >> t;

    while(t > 0) {

        int n;
        cin >> n;

        deque<int> dq = generateDeque(n);

        for(int i = 0; i < dq.size(); ++i) {
            cout << dq[i] << ' ';
        }
        cout << endl;

        --t;
    }

    return 0;
}