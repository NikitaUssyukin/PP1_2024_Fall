#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {

    int n;
    cin >> n;

    set<int> primes;
    vector<int> superPrimes;

    int primeIndex = 1;

    for(int i = 2; superPrimes.size() < n; ++i) {
        bool isPrime = true;
        for(int j = 2; j < i; ++j) {
            if(i % j == 0) isPrime = false;
        }
        if(isPrime) {
            primes.insert(i);
            if(primes.count(primeIndex)) {
                superPrimes.push_back(i);
            }
            ++primeIndex;
        } 
    }

    cout << superPrimes[n - 1] << endl;

    return 0;
}
