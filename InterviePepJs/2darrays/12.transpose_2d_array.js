function transpose(arr, row, clm) {
  for (let i = 0; i < row; i++) {
    for (let j = 0; j < i + 1; j++) {
      [arr[i][j], arr[j][i]] = [arr[j][i], arr[i][j]];
    }
  }
}

function printArr(arr, row, clm) {
  for (let i = 0; i < row; i++) {
    console.log(arr[i].join(" "));
  }
}

let arr = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];
let row = 3;
let clm = 3;

transpose(arr, row, clm);
printArr(arr, row, clm);
