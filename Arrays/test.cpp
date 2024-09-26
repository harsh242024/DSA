#include <iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6,7,8,10};
    int size =8;
    int start=0;
    int end=size -1;
    for(int i=0;true;i++){
        if(start>end){
            break;
        }
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i =0; i <size;){
        cout<<arr[i]<< " ";
        i++;
    }
}