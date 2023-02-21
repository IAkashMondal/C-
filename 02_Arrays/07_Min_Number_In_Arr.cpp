#include<iostream>
#include<limits.h>
using namespace std;
int FindMin(int arr[],int size){
    int min = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout << min << endl;

}
int main(){
    
    int arr[]={1,2,3,4,-50,65,7,8,9,10};
    int size =10;
    FindMin(arr,size);
}