#include<iostream>
#include<vector>
using namespace std;

// a+b =k

int main(){

    int k ;
    cout <<"Add target"<< endl;
    cin>> k;
    vector<int>arr{10,20,30,40,50,60,70};

    for(int i=0;i< arr.size();i++){
        for(int j =i+1 ;j<arr.size();j++){
            if(arr[i]+arr[j]==k){
                 cout<<k<<" pair Found: "<< arr[i] <<" , "<<arr[j]<< endl;
            }
            
        }
    }

    return 0;
}