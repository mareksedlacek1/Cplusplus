#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    //Significant digits start counting from the first non-zero digit, no matter where the decimal point is
    float Float = 1.0123456789;
    cout << setprecision(20) << Float << endl;
    
    //Example the bigger the number the less precision
    float Float2 = 12345678912345789.0;
    cout << setprecision(20) << Float2 << endl;

    //Exponent limit
    float Float3 = std::pow(10.0,38); 
    cout << setprecision(20) << Float3 << endl;


    /*results show that float precision stops after 7 
    thats because float is built differently then int:
    float = 4 bytes = 32 bits
    sign = 1 bit 
    exponent = 8 bits = 2^8 = 256 -> (-127 to 127) (sets range)
    mantissa = 23 bits  ~ 7 digits  (sets precision)
    */
    
    /*MANTISSA   
    we want to know how many 2 multiplication is equal to how many 10 multiplication (digits)
    example 2^(4bits) = 16 (decimal) ~ 2 digits 
            2^N = 10^D digits ? (N=1)
            log(2^N) = D
            log(2) = 0.3 -> 1 bit ~ 0.3 digits
    conclusion 23 * 0.3 ~ 7 digits that are accurate
    */

    /*Exponent limit
    float exponent is stored in binary scientifc notation -> 2^127 ~ 1.7^38
    */


}