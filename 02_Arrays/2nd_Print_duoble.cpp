#include<iostream>
using namespace std;
int main(){
    
    int arr[10];
    cout <<"Add elemements"<<endl;
    for(int i =0;i<10;i++){
        cin >>arr[i] ;
    }
    for(int i=0;i<10;i++){
        cout << arr[i] *2 <<" ";
    }
}