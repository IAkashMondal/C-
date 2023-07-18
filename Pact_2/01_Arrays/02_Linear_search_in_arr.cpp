#include<iostream>
#include<vector>
using namespace std;
int found(int arr1[],int key,int size){
    for(int i=0;i<size;i++){
        if(arr1[i]==key){
            return i;
        }
        
    }
    return false;

}
int main(){
int key ;
cout<<"ENTER Key"<<endl;
cin>>key;
int arr1[5]={1,2,3,4,5};
int size= 5;
if(found(arr1,key,size)){
cout<< "Key Found "<< arr1 <<endl;
}
else{
    cout<< "key not present in the ARR"<<endl;
}
vector<int>ans;

cout<< endl;
return 0;
}