#include <iostream>
using namespace std;


void PrintCounting( int x){
    for (int i =0;i<=x;i++){
        cout << i << " ";
    }
}

int main(){
    int n;
    cout << "Enter numbers to be printed : ";
    cin>>n;
    PrintCounting(n);
}