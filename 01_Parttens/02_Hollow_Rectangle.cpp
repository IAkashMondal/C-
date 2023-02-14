#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout << "Incert r" << endl;
    cin >> r ;
    cout << "Incert c" << endl;
    cin >>c ;
  for (int i = 0; i < r; i++) {
    if (i == 0 || i == sizeof(r)) {
      for (int j = 0; j < c; j++) {
        cout << "* ";
      }
    } else {
      for (int j = 0; j < c; j++) {
        if (j == 0 || j == c) {
          cout << "* ";
        } else {
          cout << "  ";
        }
      }
    }
    
    cout << endl;
  }
}
  // no.2
  //     c0  c1 c2 c3 c4 c5
  // r0   *   *  * *  *  *
  // r1   *              *
  // r2   *   *  * *  *  *