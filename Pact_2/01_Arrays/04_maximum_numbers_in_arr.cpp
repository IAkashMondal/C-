#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

vector<int>arr1{1,2,3,4,5,28,54,13,-13,82,15};
vector<int>ans;
int min=INT_MAX;

int size= arr1.size();
for(int i=0;i<size;i++){
    if(arr1[i]<min){
        min=arr1[i];
    }
}
cout<<min<<endl;
cout<< endl;
return 0;
}