#include <iostream>
#include <cstring>
using namespace std;
bool Palindrome(char ch[])
{
    int i = 0;
    int n = strlen(ch);
    int j = n - 1;

    while (i <= j)
    {
        if (ch[i] != ch[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }

        return true;
    }
}
int main()
{

    cout << "Enter a string: ";
    char ch[100];
    cin >> ch;

    Palindrome(ch);

    cout << "palimdrome string: " << Palindrome(ch) << endl;
    return 0;
}