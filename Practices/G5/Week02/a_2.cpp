#include <iostream>

using namespace std;

int main() {

    int a = 1; // loop variable, also known as "iterator"
               // or loop counter variable
    
    while(a <= 5) { // loop start or continuation condition
                    // based on the loop variable
        cout << a << endl;
        ++a; // operation that we perform on the loop variable
             // each iteration of the loop
             // usually, the operation makes the value
             // of the variable closer to the stop condition of the loop
    }

    return 0;
}