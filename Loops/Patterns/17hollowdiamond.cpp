#include <iostream>
using namespace std;
int main(){
    for(int row  =0; row<6;row++){
        for(int col=0;col< 6 - row -1;col++){
            cout<<" ";
        }
        for(int col=0;col<2*row+1;col++){
            if(col == 0 || col==2*row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        }
    for(int row=0;row<6;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<(2*6)-(2*row+1)-1;col++){
            if(col == 0 || col == (2*6)-(2*row) -( 2)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}