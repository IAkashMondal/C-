#include<iostream>
using namespace std;

// function ------------------------->
int add(int a,int b){
    cout <<"Address of a in add function :"<< &a <<endl;
    int sum = a+b ;
    return sum;

}

int main(){
    int a;
    cout <<"Add value of a"<<endl;
     cout <<"Address of a in main function : "<< &a <<endl;
    cin >>a;
    int b;
    cout <<"Add value of b"<<endl;
    cin >>b;
    int sum = add(a,b);
    cout << sum <<endl;
    return 0;
}