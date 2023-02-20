#include<iostream>
using namespace std;
int main(){
    bool a = true;
    bool b = false ;
    bool c = false ;
    bool d = true;
    cout << (a&b )<<endl; //  true & false => true | 0;
    cout << (b&c )<<endl; // true  false & False => true ;
    cout << (a&d )<<endl; // true & true => false;
    cout << (a|d )<<endl; // true & true => false;
    cout << (~a )<<endl; // -2
    cout << (~b )<<endl; //-1 

    int v =5;
    cout<< (++v)*(++v)<< endl ;

}