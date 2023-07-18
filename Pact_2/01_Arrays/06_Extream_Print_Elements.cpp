#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int>arr1{1,2,3,4,5,7,8,9};
vector<int>ans;
int s=0;
int e= arr1.size()-1;
while(s<=e){
    if(s==e){
    cout<<arr1[s]<<" ";
    }
    else{
        cout<<arr1[s]<<" ";
        cout<<arr1[e]<<" ";
    }
    s++;
    e--;

}

cout<< endl;
return 0;
}