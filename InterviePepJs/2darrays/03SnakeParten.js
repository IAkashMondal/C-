// q-3 snake Digonal

var arr = [
  // INDEX                       partte  P-iNDEX
  ["A", "B", "C", "D"], // [00, 01, 02, 03]    A B C D   [ 00 01 02 03 ]
  ["E", "F", "G", "H"], // [10, 11, 12, 13]    H G F E   [ 13 12 11 10 ]
  ["I", "J", "K", "L"], // [20, 21, 22, 23]    I J K L   [ 20 21 22 23 ]
  ["M", "N", "O", "P"], // [30, 31, 32, 33]    P O N M   [ 33 32 32 30]
];
let Row = arr.length;
let Clm = arr[0].length;
let SnakeDigonal = [];

for (let r = 0; r < Row; r++) {
  // left digonal
  if (r % 2 == 0) {
    for (let c = 0; c < Clm; c++) {
      SnakeDigonal.push(arr[r][c] + " ");
    }
  }
  if (r % 2 == 1) {
    for (let c = Clm - 1; c >= 0; c--) {
      SnakeDigonal.push(arr[r][c] + " ");
    }
  }
}
console.log(SnakeDigonal);
