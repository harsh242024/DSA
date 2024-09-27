#include <iostream>
using namespace std;

bool find(int arr[10],int key, int size){           // parameters
    //linear search
    for(int i=0;i<size;i++){
        if(arr[i]==key){
             return true;
        }
    }
    // not present 
    return false;
}


int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size =10;
    int key;
    cout << "enter the number/key to be found : ";
    cin>>key;
    if(find(arr,key,size)){             //arguments
        cout<< "Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

} 