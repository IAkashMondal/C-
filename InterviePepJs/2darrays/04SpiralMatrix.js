let arr = [
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9, 10, 11, 12],
  [13, 14, 15, 16],
];
// 1->13 ->16->4->2->10->11->7->6.
// 1 5 9 13 14 15 16 12 8 4 3 2 6 10 11 7
let left = 0;
let top = 0;
let right = arr.length - 1;
let bottom = arr[0].length - 1;
let row = arr.length;
let clm = arr[0].length;
let count = 0;
const result = [];
// Print top Left [1->13];

while (count < row * clm) {
  for (let i = top; i <= bottom && count < row * clm; i++) {
    result.push(arr[i][top]);
    count++;
  }
  left++;

  // print bottom left to right [14->16];

  for (i = left; i <= right && count < row * clm; i++) {
    result.push(arr[bottom][i]);
    count++;
  }
  bottom--;
  // print bottom right to topvright [12->4];

  for (i = bottom; i >= top && count < row * clm; i--) {
    result.push(arr[i][right]);
    count++;
  }
  right--;
  for (i = right; i >= left && count < row * clm; i--) {
    result.push(arr[top][i]);
    count++;
  }
  top++;
}
console.log(result.join(" "));

console.log(
  "OutPut Shoud be :",
  "\n" + "1 5 9 13 14 15 16 12 8 4 3 2 6 10 11 7",
  "\n"
);
console.log(result.join(" "));
