#include<iostream>
#include<vector>
using namespace std;

int main(){
      cout <<"arr---------------------------------------------------------------------->"<< endl ;

    vector<int>arr;
    int space_Byte_Taking=(sizeof(arr)/sizeof(int));
    cout << "space_Byte_Taking :"<<space_Byte_Taking<< endl;
    cout << arr.size() << endl;
    cout << arr.capacity()<< endl;
    cout << arr.empty()<< endl;
    // insert----------------------------->
    arr.push_back(5);
    arr.push_back(7);

    // print -------------------------------->
    for(int i = 0;i<arr.size();i++){
        cout<< arr[i]<<" " ;
    }
    cout << endl ;
    // Remoove/ delete---------------------------->
    arr.pop_back();
     for(int i = 0;i<arr.size();i++){
        cout<< arr[i]<<" " ;
    }
    cout << endl ;

    cout <<"brr---------------------------------------------------------------------->"<< endl ;
    // cpcity----------------------------------->
    vector<int>brr(10,0);  //10 is size and 0 will initialize every element
     cout << brr.size() << endl;
     cout << brr.capacity()<< endl;
     // print -------------------------------->
    for(int i = 0;i<brr.size();i++){
        cout<< brr[i]<<" " ;
    }
      cout << endl ;
    cout <<"crr---------------------------------------------------------------------->"<< endl ;

     vector<int>crr{10,20,30,40,50};  //10 is size and 0 will initialize every element
     cout << crr.size() << endl;
     cout << crr.capacity()<< endl;
     cout << crr.empty()<< endl;
     // print -------------------------------->
    for(int i = 0;i<crr.size();i++){
        cout<< crr[i]<<" " ;
    }
      cout << endl ;
    cout <<"drr---------------------------------------------------------------------->"<< endl ;

    int n;
    cout <<"Add value to ctreate a vector"<<endl;
    cin>>n;
    vector<int>drr(n);  //10 is size and 0 will initialize every element
     cout << drr.size() << endl;
     cout << drr.capacity()<< endl;
     cout << drr.empty()<< endl;
     // print -------------------------------->
    for(int i = 0;i<drr.size();i++){
        cout<< drr[i]<<" " ;
    }

   return 0;
}
