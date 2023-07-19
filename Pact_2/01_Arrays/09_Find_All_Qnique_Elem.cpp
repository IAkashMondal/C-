#include <iostream>
#include <vector>

using namespace std;

vector<int> findUniqueElements(vector<int> arr) {
  vector<int> uniqueElements;
  for (int i = 0; i < arr.size(); i++) {
    int isUnique = true;

    // Compare the current element with the rest of the elements
    for (int j = 0; j < arr.size(); j++) {
      if (i != j && arr[i] == arr[j]) {
        isUnique = false;
        break;
      }
    }
    
    if (isUnique) {
      uniqueElements.push_back(arr[i]);
    }
  }
  return uniqueElements;
}

int main() {
  vector<int> arr = {1, 1, 2, 3, 4, 5, 3, 2, 0};
  vector<int> uniqueElements = findUniqueElements(arr);
  for (int element : uniqueElements) {
    cout << element << " ";
  }
  cout << endl;
  return 0;
}
