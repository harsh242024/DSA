#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int key =5;
    int size =10;

    bool flag =0;  

    //linear search
    for (int i=0; i<size;i++){
        if(arr[i]==key){
            //found
            flag = 1;
        }
    }
    if(flag){
        cout<< "Present";
    }
    else{
        cout<<"Not Present";
    }
    return 0;
}