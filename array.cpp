#include <iostream>
using namespace std;
int main(){
    int twoDarray[][3]={{5,2,3},{6,2}};
    cout << twoDarray[1][2] << endl; // 2 row and 3rd col was not declared by default equals 0
    return 0;
}