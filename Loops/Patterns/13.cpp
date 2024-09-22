#include <iostream>
using namespace std;
int main(){
    int length ;
    cout << " Enter length of hollow square : ";
    cin >> length;
    for ( int row = 0 ; row<length ; row++){
        if ( row == 0 || row == length - 1){
            for (int col =0 ; col < length ; col++){
                cout <<" * ";
            }
        }
        else{
            cout<<" * ";
            for (int col = 0 ;col< length -2 ;col++ ){
                cout << "   ";
            }
            cout<<  " * ";
        }
        cout << endl;
    }
}