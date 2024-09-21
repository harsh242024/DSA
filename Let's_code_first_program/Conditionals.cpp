#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter the age : ";
    cin >> age;
    if(age >=18 ){
        cout << "Person is eligible to vote. ";
    }
    else {
        cout << "Person is not eligible to vote. ";
    }

}