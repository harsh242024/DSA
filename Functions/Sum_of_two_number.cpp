#include <iostream>
using namespace std;
int getSum(int a, int b){
    int result = a + b;
    return result;      //can also use return a+b ;
}
int main(){
    int a;
    cout<<"Enter avlue of a : ";
    cin >> a;
    int b;
    cout<<"Enter avlue of b : ";
    cin >> b;
    int sum = getSum(a,b);
    cout<<"Sum of two numbers given is : "<<sum;
    return 0;
}
