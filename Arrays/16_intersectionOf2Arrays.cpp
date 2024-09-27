#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5};                      ////errorrrrrr
    vector<int>brr{2,3,8};                          ////errorrrrrr
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];                       // can also be solved without declaring element
        for(int j=0;j<brr.size();j++){
            if(element==brr[j]){               //for duplicate values, use mark concept
                ans.push_back(element);        // ------> brr[j] = -1;
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}