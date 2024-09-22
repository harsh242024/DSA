#include <iostream>
using namespace std;
int main(){
    for( int row = 0 ; row < 5 ; row = row + 1 ){
        for ( int space = 0 ; space <  row ; space = space +1 ){
            cout << " ";
        }
        for( int star = 0 ; star < 5 - row ; star = star + 1 ){
            cout << "* ";
        }
        cout << endl;
    }
}
//  Inverted Full Pyramid