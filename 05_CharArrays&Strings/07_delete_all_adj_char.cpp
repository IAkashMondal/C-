#include <iostream>
#include <string>
using namespace std;

void removeAllAdjElem(string input)
{
    int i = 0;
    int n = input.length();
    string ans = "";
    while (i < n)
    {

        if (ans.length() > 0 && ans[ans.length() - 1] == input[i])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(input[i]);
        }

        i++;
    }
    cout << "Modified String: " << ans << endl;
}
int main()
{

    string input;
    cout << "Enter String" << endl;
    getline(cin, input);

    removeAllAdjElem(input);

    return 0;
}