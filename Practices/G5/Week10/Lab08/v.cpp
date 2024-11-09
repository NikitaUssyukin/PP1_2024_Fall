#include <iostream>
#include <deque>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t > 0) {

        int n;
        cin >> n;

        deque<int> dq;

        while(n > 0) {
            dq.push_front(n);
            int reps = n % dq.size();
            while(reps > 0) {
                dq.push_front(dq.back());
                dq.pop_back();
                --reps;
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
