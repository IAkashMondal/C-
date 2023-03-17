#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector < vector <int > >arr;
   
    vector<int> a {1,2,3};
    vector<int> b{4,5,6};
    vector<int> c {7,8,9,10};
    
  arr.push_back(a);
  arr.push_back(b);
  arr.push_back(c);
    
    for(int i=0;i<arr.size();i++){
        for(int j=0;j< arr[i].size();j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
    // another method---------------------->
     cout <<"another method---------------------<"<<endl;
    int row =4 ;
    int clm =3;
    vector<vector <int> >arrs(row, vector<int>(clm,-1));
    for(int i=0;i<arrs.size();i++){
        for(int j=0;j< arrs[i].size();j++){
            cout << arrs[i][j]<<" ";
        }
        cout<<endl;
    }

     return 0;
}
