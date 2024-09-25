#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[]={1,234,45,65,47,764,34,999,65,743,4};
    int size =11;
    int maxi =INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<"Maximum no. in the given array is : "<< maxi<<endl;
}