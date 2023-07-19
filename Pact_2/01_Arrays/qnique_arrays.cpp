#include<iostream>
#include<vector>
using namespace std;

int FindUnique(vector<int> arr){
int ans =0;
    for(int i=0;i<arr.size();i++){
        ans = ans^ arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<< "Enter Size of your Arr :"<<endl;
    cin >> n ;
    vector<int>Unique(n);
    cout<< "Enter The Ellemts :"<<endl;
    for(int i=0;i<Unique.size();i++){
        cin >>Unique[i];
    }
    cout<< endl;
    // using xor oprator for this question ----------------------> 
    int Result = FindUnique(Unique);
    cout<< Result <<endl;

return 0 ;    
}
