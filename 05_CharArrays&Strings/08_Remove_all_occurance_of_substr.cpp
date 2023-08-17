#include <iostream>
#include <string>
using namespace std;

void RemoveAllOccuranceOfsubstring(string str, string TargetPart)
{
    int Pos = str.find(TargetPart);
   
    while (Pos != string::npos)
    {
        str.erase(Pos,TargetPart.length());
        Pos = str.find(TargetPart);
    }
    cout << "After Removing Target part String: " << str << endl;
}
int main()
{

    string input;
    string TargetPart;
    cout << "Enter String" << endl;
    getline(cin, input);
    cout << "Enter TargetPart To Remove" << endl;
    getline(cin, TargetPart);

    RemoveAllOccuranceOfsubstring(input,TargetPart);
  

    return 0;
}