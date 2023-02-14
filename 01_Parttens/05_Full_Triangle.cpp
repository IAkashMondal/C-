#include<iostream>
using namespace std;
int main(){
      int n;
  cout << "Incert n"<< endl;
  cin >> n;
  for (int i = 0; i < n; i++) {
    // space---------------->
    for (int c = 0; c < n - i - 1; c++) {
      cout << " ";
    }
    for (int j = 0; j < i + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
//     c1 c2 c3 c4 c5 c6 c7
  // r1     *
  // r2     * *
  // r3    * * *
  // r4   * * * *
  // r5  * * * * *
  // r6 * * * * * *