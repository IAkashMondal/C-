let arr = [
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9, 10, 11, 12],
  [13, 14, 15, 16],
];
let left = 0;
let top = 0;
let right = arr.length - 1;
let bottom = arr[0].length - 1;
let row = arr.length;
let clm = arr[0].length;
let count = 0;
const result = [];

while (count < row * clm) {
  for (let i = left; i <= right && count < row * clm; i++) {
    result.push(arr[top][i]);
    count++;
  }
  top++;
  for (let i = top; i <= bottom && count < row * clm; i++) {
    result.push(arr[i][right]);
    count++;
  }
  right--;
  for (i = right; i >= left && count < row * clm; i--) {
    result.push(arr[bottom][i]);
    count++;
  }
  bottom--;
  for (i = bottom; i >= top && count < row * clm; i--) {
    result.push(arr[i][left]);
    count++;
  }
  left++;
}
console.log(
  "OutPut Shoud be :",
  "\n" + "1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10",
  "\n"
);
console.log(result.join(" "));
