#include <iostream>
using namespace std;
int main(){
    int l;
    int b;
    cout << "Enter length of rectangle : "<<endl;
    cin>>l;
    cout << "Enter the breadth of rectangle : "<<endl;
    cin>>b;
    for (int row =0; row<b;row=row+1){
        for (int col =0;col<l;col=col+1){
            cout <<"    *   ";
        }
        cout << endl << endl; 
    }
}
//Rectangle Pattern for n lines