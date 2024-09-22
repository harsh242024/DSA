#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"Enter three numbers : ";
    cin>>a>>b>>c;
    //cin>>b;
    //cin>>c;
    cout << "Three numbers choosen are : " <<" " <<a <<" " << b <<" "<<c <<endl;
    if(a>b){
        if(a>c){
            cout <<"A is max" <<a;
        }
        else
        cout<<"C is max" <<c;
    }
    else if(b>c){
        cout << "B is max" <<b;
        }
        else {
            cout << "C is max" <<c;
        }
    
}