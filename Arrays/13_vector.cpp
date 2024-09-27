#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;
    arr.push_back(5);
    arr.push_back(6);                               //adding element
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    arr.pop_back();                                 //deleting element
    for(int i=0;i<arr.size();i++){                  
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Vector arr is empty or not : "<<arr.empty();                 //to check empty or not





    // vector<int> arr{1,0,3};                  This method not working in vscode
    // cout<<arr[1];
}