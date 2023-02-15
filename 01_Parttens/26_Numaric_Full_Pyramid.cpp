#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Add n Vallue ------------------->" << endl;
    cin>> n ;
    for(int i=0;i<n;i++){
        // space------------------>
        for(int j=0;j<n-i+1;j++){
            cout <<"  ";
            
        }
        // Number------------------>
        for(int j=0;j<i;j++){
            cout << i+j<< " ";
            
        }
        // Reverse Number----------->
        for(int j=i-1;j>=1;j--){
            cout << i+j-1 <<" ";
            
        }
        cout << endl;
    }
}

//     1
//   2 3 2
// 3 4 5 4 3