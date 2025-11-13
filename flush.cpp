#include <iostream> /*he C++ standard library (not my code) creates std::cout and its buffer at program startup  
before main runs  so they exist even if you never use them  */ 

#include <typeinfo>

// iostream puts flush inside the std namespace
using std::cout,std::flush;

int main() {
    cout << "hello" << flush; // "hello" us first stored in the stream s memory buffer flush forces buffer data to be written
    cout << "hi" << std::endl;

    cout << "" << std::endl;
    cout << "hello" << std::endl; // endl = newline + flush
    cout << "hi" << std::endl;

    cout << "" << std::endl;
    cout << "hello" << flush << "\n";
    cout << "hi" << std::endl;

    /*Runtime: when execution reaches an output expression (std::cout << "hello";), 
    the operator<< copies characters from the literal into the stream's buffer (memory) then returns. 
    Flushing (writing to the OS/terminal) happens only when you call flush/endl, when the buffer fills, 
    when the stream is line‑buffered and a newline is written to a terminal, or on program/stream destruction.*/
    // conclusion flush+"\n" same as endl

    unsigned int var1 = 1;
    int var2 = -1;

    std::cout << typeid(var1).name() << std::endl;
    std::cout << typeid(var2).name() << std::endl;
    std::cout << typeid(var1*var2).name() << std::endl;
    std::cout << var1*var2 << std::endl;

    return 0;
}