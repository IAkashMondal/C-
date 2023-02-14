#include<iostream>
using namespace std;
int main(){
      int n;
  cout << "Incert n"<<endl;
  cin >> n;
    for (int i = 0; i < n; i++) {
    // space---------------->
    for (int c = 0; c < i; c++) {
      cout << " ";
    }
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  
}