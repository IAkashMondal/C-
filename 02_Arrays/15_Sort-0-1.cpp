#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>arr={1,0,1,0,1,1,0,1,0,0};
 int start=0;
 int end=arr.size()-1;
 int i=0;
 while(start <= end){
    if(arr[i]==0){
        swap(arr[start],arr[i]);
        i++;
        start++;
    }
    if(arr[i]==1){
        swap(arr[i],arr[end]);
        end--;
    }
 }
 for(auto value:arr ){
    cout << value <<" ";
 }
    return 0;
}

// in js------------------------------------------------------------------------------------------------------>
// let arr = [1, 0, 1, 0, 1, 1, 0, 1, 0, 0];
// let start = 0;
// let end = arr.length - 1;
// let i = 0;
// const swap = (i, j) => {
//   let temp = arr[i];
//   arr[i] = arr[j];
//   arr[j] = temp;
//   return temp;
// };
// while (start <= end) {
//   if (arr[i] == 0) {
//     swap(start, i);
//     i++;
//     start++;
//   }
//   if (arr[i] == 1) {
//     swap(i, end);
//     end--;
//   }
// }

// for (let value of arr) {
//   console.log(value + " ");
// }
