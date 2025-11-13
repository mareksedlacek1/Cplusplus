#include <iostream> 
//tells the C++ compiler to include the standard input/output library header file. 
//This Header provides classes and functions for handling input and output operations, such as cout (for console output) and cin (for console input). 
//Without it, you couldnt use these standard I/O features in your program. 

#include <cfloat>
using namespace std; 
// C++ directive that tells the compiler to bring all the names from the std namespace into the current scope.
// A namespace in C++ defines a scope (a region of code) where identifiers (names of variables, functions, classes, etc.)

// Compilation:
// C++ is a compiled language, so you must build (compile) your source code into an executable before running it.
// Unlike interpreted languages (like Python), the compiler translates your code into machine-readable instructions first.

int main() {
    
    cout << "Starting program..." << endl;
    // int 2var = 5; compilation error
   
    cout << FLT_MAX << endl;
    
    int array[3] = {1,2,3};
    //cout << array[3] << endl;

    // multiplication table
    int table[10][10];
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            table[i][j] = i*j;
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cout << table[i][j] << " " << flush;
        }
        cout << "" << endl;
    }
 
    return 0;
}