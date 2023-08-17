#include <iostream>
#include <cstring>
using namespace std;

void UpperCse(char ch[])
{
    int n = strlen(ch);

    for (int i = 0; i < n; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z') // Check if the character is lowercase
        {
            ch[i] = ch[i] - 'a' + 'A'; // Convert to uppercase
        }
    }
}

int main()
{
    cout << "Enter a string: ";
    char ch[100];
    cin >> ch;

    UpperCse(ch);

    cout << "UpperCse string: " << ch << endl;
    return 0;
}
