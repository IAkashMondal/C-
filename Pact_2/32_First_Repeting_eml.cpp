#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{

    vector<int> arr1 = {1, 2, 2, 3, 4, 4, 5, 5, 6, 9, 0, 6, 5};
    vector<int> ans;
    unordered_map<int, int> hash;
    for (int i = 0; i < arr1.size(); i++)
    {
        hash[arr1[i]]++;
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        if(hash[arr1[i]]>1){
            cout<< i+1;
            break;
        }
    }
   
    cout << endl;
    return 0;
}