#include <iostream>
using namespace std;
int main(){
    for( int row =0 ; row<3 ;row =row +1 ){
        if ( row ==0 || row ==2 ){
            for ( int col = 0; col<5; col = col + 1 ){
                cout << " * ";
            }
            cout << endl;
        }
        else{
            cout << " * ";
            for ( int col =0; col<3;col = col+1){
                cout << "   ";

            }
            cout << endl;
        }
        
    }
}// Hollow Rectangle

// #include <iostream>
// using namespace std;
// int main(){
//     int rowcount,colcount;
//     cin>>rowcount>>colcount;
//     for(int row =0;row<rowcount;row++){
//         for(int col =0; col<colcount;col++){
//             if(row == 0 || row == rowcount -1 || col == 0 || col == colcount -1 ){
//                 cout << " * ";
//             }
//             else{
//                 cout<<"   ";
//             }
//         }
//         cout<<endl;
//     }
// }
    
