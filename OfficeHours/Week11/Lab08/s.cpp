#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<int> dq;

    bool reversed = false;

    int q;
    cin >> q;

    while(q > 0) {

        int request, x;
        cin >> request;

        if(request == 1) {
            cin >> x;
            if(reversed) {
                dq.push_front(x);
            }
            else {
                dq.push_back(x);
            }
        }
        else if(request == 2) {
            reversed = !reversed; // if true, then change to false; if false then true
        }

        --q;
    }

    if(reversed) {
        for(int i = dq.size() - 1; i >= 0; --i) {
            cout << dq[i] << ' ';
        }
    }
    else {
        for(int i = 0; i < dq.size(); ++i) {
            cout << dq[i] << ' ';
        }
    }
    cout << endl;

    return 0;
}
