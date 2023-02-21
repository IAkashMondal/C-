#include<iostream>
using namespace std;
bool find(int arr[],int size,int key ){
    for(int i=0 ;i< size;i++){
        if(i== key){
            return true;
            break;
        }
    }
    return false;

}
int main(){
    
    int arr[10]={0,1,2,3,4,5,6,7};
    int size = 7;
    int key ;
    cout <<"Add key to Search"<<endl;
    cin >> key ;
    if(find(arr,size,key)){
    cout <<" Found In arr" << endl;
    }
    else{
        cout<< "Not Found key in arr"<< endl;
    }
}