#include<iostream>
using namespace std;
void MyCount(int arr[],int size){
    int Count_Of_0 =0;
    int Count_Of_1=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            Count_Of_0++;
        }
        else if(arr[i] == 1){
            Count_Of_1 += 1;
        }

    }
    cout <<"Count_Of_0 :" << Count_Of_0 <<"\n" "Count_Of_1 :" <<Count_Of_1 << endl;
}
int main(){
    
    int arr[]={1,0,0,1,1,0,1};
    int size= 7;
    MyCount(arr,size);
}