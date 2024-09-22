#include <iostream>
using namespace std;


char getGrade(int marks){        //parameter
        if (marks >90 )
            return 'A';
        else if (marks>80)
            return 'B';
        else if (marks >70)
            return 'C';
        else if (marks >60)
            return 'D';
        else
            return 'E';
}    

int main(){
    int marks;
    cin >> marks;
    char FinalGrade = getGrade(marks);       //argument
    cout << FinalGrade <<endl;
}