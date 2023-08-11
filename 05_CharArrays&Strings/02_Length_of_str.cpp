#include <iostream>
#include <string.h>
using namespace std;

int getChararrLenth(char ch[])
{
    int i=0;
    int length=0;
    while (ch[i] != '\0'){
        length++;
        i++;
    }
    return length;
}
int main()
{
    cout<<"add char"<<endl;
    char ch[100];
    cin >> ch;

    cout << getChararrLenth(ch) << endl;
    //inbuid function
    cout << strlen(ch) << endl;
    return 0;
}