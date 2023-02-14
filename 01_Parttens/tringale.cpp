#include<iostream>
using namespace std;
int main(){
   int r,c;
    cout << "Incert r";
    cin >>r ;
    cout << "Incert c";
    cin >> c;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

  // no.1
  //     c0  c1 c2 c3 c4 c5
  // r0   *   *  * *  *  *
  // r1   *   *  * *  *  *
  // r2   *   *  * *  *  *