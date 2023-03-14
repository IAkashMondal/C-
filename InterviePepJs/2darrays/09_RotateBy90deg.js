let arr = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];
let row = arr.length;
let clm = arr[0].length;
const swap = (i, j) => {
  let temp = arr[i][j];
  arr[i][j] = arr[j][i];
  arr[j][i] = temp;
  return temp;
};
// Transpose the matrix
for (let i = 0; i < row; i++) {
  for (let j = i; j < clm; j++) {
    swap(i, j);
  }
}

// Reverse each row of the transposed matrix
for (let i = 0; i < row; i++) {
  for (let j = 0; j < clm / 2; j++) {
    let temp = arr[i][j];
    arr[i][j] = arr[i][clm - j - 1];
    arr[i][clm - j - 1] = temp;
  }
}

console.log(arr.join(","));
