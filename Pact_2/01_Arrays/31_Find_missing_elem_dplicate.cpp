#include <iostream>
#include <vector>
using namespace std;
int MissingElem(vector<int> arr)
{
    // Visited Methods------------>
    for (int i = 0; i < arr.size(); i++)
    {
        //taking indexs of absolute value
        int index = abs(arr[i]);
        // index to start from 1 not 0
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            cout<<i+1<<endl;
        }
    }
    //
}

int main()
{

    vector<int> arr{1, 3, 4, 4, 5};
    int ans = MissingElem(arr);

    cout << endl;
    return 0;
}