// q-2 left and rigjht digonal

var arr = [
  // INDEX                partte  P-iNDEX
  ["A", "B", "C"], // [00, 01, 02,]     A - C   [00 - 02]
  ["D", "E", "F"], // [10, 11, 12,]     - E -   [-  11 -]
  ["G", "H", "I"], // [20, 21, 22,]     G - I   [20 - 22]
];
let Row = arr.length;
let Clm = arr[0].length;
let LDigonal=[];
let RDigonal = [];
for (let r = 0; r < Row; r++) {
  for (let c = 0; c < Clm; c++) {
    // left digonal
    if (r == c) {
      LDigonal.push(arr[r][c]);
    }
    if (r + c == Row - 1) {
      RDigonal.push(arr[r][c]);
    }
  }
}
console.log(LDigonal +"\n"+ RDigonal)