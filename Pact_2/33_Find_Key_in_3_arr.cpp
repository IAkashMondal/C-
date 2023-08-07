#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    vector<int> A{1, 2, 3, 4, 5};
    vector<int> B{11, 2, 33, 44, 55};
    vector<int> C{11, 2, 333, 444, 554};
    int i, j, k;
    i = j = k = 0;

    int n1 = A.size();
    int n2 = B.size();
    int n3 = C.size();

    bool found_common = false;

    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            if (i == 0 || A[i] != A[i - 1] || j == 0 || B[j] != B[j - 1] || k == 0 || C[k] != C[k - 1])
            {
                cout << A[i] << " ";
                found_common = true;
            }
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    if (!found_common)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << endl;
    }

    return 0;
}
