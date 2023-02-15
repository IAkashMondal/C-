#include<iostream>
using namespace std;
int main(){
 int n;
 cout <<" incert n"<< endl;
 cin >> n ;
//   1st half------------------------------------------------>
 for(int i=0 ;i<n;i++){
    // half pyramid---------------->
    for(int j =0 ;j<n-i;j++){
        cout <<"*";
    }
    //  Full Pyramid with Space ---------------->
    for(int j =0 ;j<2*i+1;j++){
        cout <<" ";
    }
    // half pyramid---------------->
    for(int j =0 ;j<n-i;j++){
        cout <<"*";
    }
    cout << endl;
 }
//   2nd half ------------------------------------------------>
 for(int i=0 ;i<n;i++){
    // Inverted half pyramid---------------->
    for(int j =0 ;j<i+1;j++){
        cout <<"*";
    }
    // Inverted Full Pyramid with Space ---------------->
    for(int j =0 ;j<2*n -2*i-1;j++){
        cout <<" ";
    }
     // Inverted half pyramid---------------->
    for(int j =0 ;j<i+1;j++){
        cout <<"*";
    }
    cout << endl;
 }
}

// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****