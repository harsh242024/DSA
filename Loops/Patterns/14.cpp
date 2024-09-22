// My Code Mistake Code
/*
#include <iostream>
using namespace std;
int main(){
    for ( int row =0;row<6 ; row++){
        if(row == 0){
            for(int col =0;col<6;col++){
                cout<<" * ";
            }
        }
        else{
            if(row == 6){
                cout <<" * ";
            }
            else{
                cout<<" * ";
            for(int space = 0 ; space<(6-row)-2 ; space++ ){
                cout<<"   ";
            }
            cout<<" * ";
            }
        }
        cout << endl;
        
    }
}
// Hollow Half Pyramid 
*/
//corrected code
#include <iostream>
using namespace std;
int main(){
    int len;
    cin >>len;
    for( int row =0 ; row < len ; row++){
        for (int col=0;col< len; col++){
            if(row == 0 || col == 0 || col == len-row - 1){
                cout<<" * ";
            }
            else
                cout<<"   ";
        }
        cout << endl;
    }
}