#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your marks : ";
    cin>>marks;
    if(marks >= 90){
        cout << "A Grade";
    }
    else{
        if(marks >= 80){
            cout << "Grade B";
        }
        else{
            if (marks >= 60){
                cout << "Grade C";
            }
            else{
                if (marks >= 40){
                    cout <<"Grade D";
                }
                else{
                    cout << "Grade E";
                }
            }
        }
    }
}