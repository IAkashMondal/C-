#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int>arr1{0,1,0,0,0,1,1,1,1,1,0,0,1,0,1,0,1};
int size= arr1.size();
int zeros= 0;
int ones= 0;
for(int i=0;i<size;i++){
    if(arr1[i]==0){
        zeros++;
    }
    else if(arr1[i]==1) {
        ones++;;
    }
}
cout<<"number of zeros: "<<zeros<<" & Number of 1's: "<< ones<<endl;
return 0;
}