#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout <<" Add n"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << j+1;
        }
        for(int j=i-1;j>=1;j--){
            cout << j;
        }
        cout <<endl;
    }
    
}

// 1
// 121
// 12321
// 1234321
