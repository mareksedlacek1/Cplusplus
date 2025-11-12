
 #include <iostream>
 using namespace std;

  //size of string object 
int main() {
     
    //Size: 8 bytes (size_t, tracks current length, e.g., 18 for your sstring).
    //Capacity: 8 bytes (size_t, tracks allocated buffer size).
    //SSO Buffer: 16 bytes (union with the *Data pointer(8bytes); stores small strings directly to avoid heap allocation).
    //*Data Pointer: 8 bytes (points to heap-allocated char array for longer strings; for short strings, SSO uses this space).
    
    //cout << sizeof(string) << endl;

    string stringVar = "he";
    // cout << sizeof(stringVar) << endl; size doesnt change still 32 bytes
    cout << "Lenght:" << stringVar.size() << endl; // length for hello is 5 char so 5 bytes the maximum length is 2^64-1
    cout << "Capactiy:" << stringVar.capacity() << endl; // 15-5 = 10 free bytes for stringVar
    //if capactiy == 0 then using SSO else using heap allocation

    cout << "Object address: " << &stringVar << endl;
    cout << "Data pointer: " << static_cast<const void*>(stringVar.c_str()) << endl;
    cout << "Data pointer points to the memory of first char:"<< *stringVar.c_str() << endl;
    // short strings are strored directly in object if capacity == 15 (SSO)otherwise in heap(Data Pointer).

}