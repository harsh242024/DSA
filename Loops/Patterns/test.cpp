#include <iostream>
using namespace std;
int main(){
    for( int row =0; row<10;row++){
        for(int col=0;col<10;col++){
            if(row == 0 || col ==0 || col == 10-row-1 )
                cout<<" * ";
            else
                cout<<"   ";
        }
        cout<<endl;
    }
}