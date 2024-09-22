#include <iostream>
using namespace std;
int main(){
    int value;
    cout << "Enter a value : "<<endl;
    cin>>value;
    switch(value){
        case 1 : cout<< "11111";
        break;
        case 2 : cout<< "22222";
        break;
        case 3 : cout<<"33333";
        break;
        default : cout << "Hiiiii"; 
    }
}