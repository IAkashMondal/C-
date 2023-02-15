#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Add n Vallue ------------------->"<<endl;
    cin>> n ;
    
    for(int i=0;i<n;i++){
        int count=1;
        // space------------------------->
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // Number WITH SPACES------------------------->
        for(int j=0;j<2*i+1;j++){
            if(i==0 || i == n-1){
                if(j %2==0){
                cout<< count <<" ";
                count += 1 ;
                }
            }
            else if(j==0 ){
                cout<< j+1 ;
            }
            else if(j== 2*i +1 -1 ){
                cout<< i+1 ;
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
}
//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5