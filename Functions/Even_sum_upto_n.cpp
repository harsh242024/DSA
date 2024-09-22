#include <iostream>
using namespace std;

int evenSum(int num){
    int sum=0;
    for (int i=2 ; i<=num;i=i+2){
        sum=sum+i;
        
    }
    return sum;
}

int main(){
    int n;
    cin>> n;
    int sum = evenSum(n);
    cout << "Sum of Even numbers upto N numbers is : "<<sum;
    return 0;
}