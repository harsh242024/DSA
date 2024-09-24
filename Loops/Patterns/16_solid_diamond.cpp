#include <iostream>
using namespace std;
int main(){
    for(int row  =0; row<6;row++){
        for(int sp=0;sp< 6 - row -1;sp++){
            cout<<" ";
        }
        for(int st=0;st<row+1;st++){
            cout<<" *";
        }
        cout<<endl;
    }
    for(int row=0;row<6;row++){
        for(int sp=0;sp<row;sp++){
            cout<<" ";
        }
        for(int st=0;st<6-row;st++){
            cout<<" *";
        }
        cout<<endl;
    }
}