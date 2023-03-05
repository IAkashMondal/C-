let arr = [
  [1, 2, 3, 4],
  [5, 6, 7, 80],
  [9, 10, 11, 12],
  [13, 14, 15, 16],
];
let row = arr.length;
let clm = arr[0].length;
let maxSum = 0;
let maxRowIndex = -1;

for (let i = 0; i < row; i++) {
  let sum = 0;
  for (let j = 0; j < clm; j++) {
    sum += arr[i][j];
  }
  if (sum > maxSum) {
    maxSum = sum;
    maxRowIndex = i;
  }
}
console.log("Max sum in a row is:", maxSum, "row number is:", maxRowIndex);
