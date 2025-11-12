#include <iostream>
using namespace std;
int main(){
    int twoDarray[][3]={{5,2,3},{6,2,4}};
    //cout << twoDarray[1][2] << endl; // 2 row and 3rd col was not declared by default equals 0

    // how to go through 2D array
    for(int i = 0; i < sizeof(twoDarray) / sizeof(twoDarray[0]) ; i++){ // for each row in 2D array
        for(int j = 0; j < sizeof(twoDarray[0]) / sizeof(int) ; j++){ // for each col in 2D array
            cout << twoDarray[i][j] << endl;
        }
    }
    return 0;
}