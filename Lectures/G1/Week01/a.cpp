// this is a comment
#include <iostream> // includes the iostream library into the file

/*

this is a multi-line comment

you can use comments to make your code clearer

*/

using namespace std; // allows to avoid writing std::

int main() { // main function, also known as the program entry point

    cout << "Hello, KBTU!" << endl; // prints the message inside the quotes to the terminal
                           // endl when outputted prints a new line

    return 0; // this line indicates that a program finished successfully
}

/*
To compile and run the code
execute these commands in the terminal

- For Windows:
  - g++ filename.cpp
  - .\a.exe
- For Mac:
  - g++ filename.cpp
  - ./a.out
*/