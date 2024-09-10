#include <iostream>

using namespace std;

int main() {

    int n_rabbits; // amount of rabbits met on the first day;
    int d_days; // total amount of hunting days

    cin >> n_rabbits >> d_days;

    /*
    1 2 3 4 5

    1 - 5 rabbits
    2 - 2 * 2 * 5 rabbits
    3 - 2 * 3 * 5 rabbits
    .
    .
    .

    We will use these values for the formula:
    (do not confuse them with variables n and d)

    a - 2
    n - 4 (d_days - 1)
    d - 1 


    */
    
    cout << int((double(d_days - 1) / 2 * (2 * 2 + ((d_days - 1 - 1))))) * 2 * n_rabbits + n_rabbits << endl;

    return 0;
}