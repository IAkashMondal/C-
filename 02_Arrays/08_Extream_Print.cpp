#include<iostream>
#include<limits.h>
using namespace std;
int ExtreamTwoPointers(int arr[],int size){
    int Small = 0;
    int Learg =size-1;
    
    while(Small <=Learg){
        cout << arr[Small]<<" ";
        Small++;
        cout <<arr[Learg]<<" ";
        Learg--;
    }

}
int main(){
    
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size =10;
    ExtreamTwoPointers(arr,size);
}
// OUTPUT 1,10,2,9,3,8,4,7,5,6