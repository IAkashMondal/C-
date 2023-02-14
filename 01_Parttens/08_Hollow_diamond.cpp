#include<iostream>
using namespace std;
int main(){
      int n;
  cout << "Incert n"<<endl;
  cin >> n;
    for (int i = 0; i < n; i++) {
    // outer space
    for (int space = 0; space < n - i - 1; space++) {
      cout << " ";
    }
    // print char
    for (int c = 0; c < 2 * i + 1; c++) {
      if (c == 0 || c == 2 * i) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++) {
    for (int space = 0; space < i; space++) {
      cout << " ";
    }
    //
    for (int c = 0; c < 2 * n - 2 * i - 1; c++) {
      if (c == 0 || c == 2 * n - 2 * i - 2) {
        cout << "*";
      }

      else {
        cout << " ";
      }
    }
    cout << endl;
  }
}