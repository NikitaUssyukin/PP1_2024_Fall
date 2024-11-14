#include <iostream>
#include <deque>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t > 0) {

        deque<int> dq;
        
        int n;
        cin >> n;

        while(n > 0) {

            dq.push_front(n);

            for(int i = 0; i < n % dq.size(); ++i) {
                // dq.back() - value of the last element
                dq.push_front(dq.back()); 
                dq.pop_back(); // deletes the last element
            }

            --n;
        }

        for(int i = 0; i < dq.size(); ++i) {
            cout << dq[i] << ' ';
        }
        cout << endl;

        --t;
    }

    return 0;
}