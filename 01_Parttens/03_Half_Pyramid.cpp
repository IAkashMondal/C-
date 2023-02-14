#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Incert n"<<endl;
    cin >>n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
  // r0 *                 0
  // r1 *  *              0 1
  // r2 *   *  *          0 1 2
  // rc c0 c1 c2