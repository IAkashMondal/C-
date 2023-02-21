#include<iostream>
#include<limits.h>
using namespace std;
int FindMax(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout << max<<endl;

}
int main(){
    
    int arr[]={1,2,3,4,50,65,7,8,9,10};
    int size =10;
    FindMax(arr,size);
}