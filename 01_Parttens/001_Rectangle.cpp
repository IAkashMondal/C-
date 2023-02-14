#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout << "Incert r" << endl;
    cin >> r ;
    cout << "Incert c" << endl;
    cin >>c ;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << "* ";
        }
        cout << endl;
    }
   
}