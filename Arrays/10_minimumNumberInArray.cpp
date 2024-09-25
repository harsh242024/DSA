#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,1234,-3,-4,-2};
    int size=13;
    int mini =INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    cout<<"Min. NO. In the array is : "<<mini<<endl;
}