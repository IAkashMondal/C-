#include <iostream>
#include <cstring>
using namespace std;

int ReverseName(char ch[])
{
    int i = 0;
    int n = strlen(ch);
    int j = n - 1;
    char ans;

    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main()
{
    cout << "Enter a string: ";
    char ch[100];
    cin >> ch;

    ReverseName(ch);

    cout << "Reversed string: " << ch << endl;

    return 0;
}
