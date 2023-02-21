#include<iostream>
using namespace std;
int main(){
    
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    char ch[23]={'a','b','c'};
    bool sub[25];
    // cout<< &(arr[0])<< "  run done"<<  endl;
    // cout<< &(arr[1])<< "  run done"<<  endl;
    for(int i =0;i<10;i++){
        cout<< &(arr[i])<< "  run done"<< i <<  endl;
    }
}