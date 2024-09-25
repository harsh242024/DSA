#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,0,23,0,1,4,1,0,100,0,1,0};
    int size =13;
    int zeroCount =0;
    int oneCount=0;
    for(int i=0;i<13;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }
    cout<<"No. of zeroes : "<<zeroCount<<endl;
    cout<<"No. of ones : "<<oneCount;
}