#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cin >> rowCount;
    for ( int row = 0 ; row < rowCount ; row = row+1){
        for ( int col =0; col < rowCount - row ; col = col + 1 ){
            cout << col + 1;
        }
        cout << endl;
    }
}
// Numeric Inverted Half Pyramid