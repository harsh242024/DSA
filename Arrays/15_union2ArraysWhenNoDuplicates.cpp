#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] ={1,3,4,5,6};
    int brr[]={2,7,8};
    int sizeA=5;
    int sizeB=3;
    vector<int> ans;
    for(int i=0;i<sizeA;i++){
        ans.push_back(arr[i]);
    }
    for(int i =0;i<sizeB;i++){
        ans.push_back(brr[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}