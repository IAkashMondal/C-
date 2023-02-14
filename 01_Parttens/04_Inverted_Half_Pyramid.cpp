#include<iostream>
using namespace std;
int main(){
 int n;
    cout << "Incert n"<<endl;
    cin >>n;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3 - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
   // r0 *  *  *
  // r1 *  *
  // r2 *
  // rc c0 c1 c2