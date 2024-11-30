#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    double sumGP = 0;
    int sumCreds = 0;

    while(n > 0) {

        int att1, att2, fnl, credits;
        cin >> att1 >> att2 >> fnl >> credits;

        double GP;

        if(att1 + att2 < 30 || fnl < 20) GP = 0.0;
        else {
            GP = 1.0 + double((att1 + att2 + fnl - 50) / 5) * 1.0/3;
        }

        sumGP += GP * credits;
        sumCreds += credits;

        --n;
    }

    cout << sumGP / sumCreds << endl;

    return 0;
}