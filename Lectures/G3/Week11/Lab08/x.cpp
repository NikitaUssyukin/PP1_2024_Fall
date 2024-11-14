#include <iostream>
#include <set>

using namespace std;

bool isPrime(int x) {
    if(x == 1) return false;
    int divisor = 2;
    while(divisor < x) {
        if(x % divisor == 0) {
            return false;
        }
        ++divisor;
    }
    return true;
}

int main() {

    int n;

    cin >> n;

    set<int> primes;

    int superPrimeIdx = 0;
    int primeIdx = 0;
    int num = 2;

    while(true) {
        if(isPrime(num)) { 
            primes.insert(num);
            ++primeIdx;
            if(primes.count(primeIdx)) ++superPrimeIdx;
        }

        cout << superPrimeIdx << ' ' << num << endl;

        if(superPrimeIdx == n) break;

        ++num;       
    }

    cout << num << endl;

    return 0;
}