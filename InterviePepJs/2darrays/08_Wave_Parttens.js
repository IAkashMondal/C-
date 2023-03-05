let arr = [
  [1, 2, 3, 4],
  [5, 6, 7, 80],
  [9, 10, 11, 12],
  [13, 14, 15, 16],
];
let row = arr.length;
let clm = arr[0].length;
let bag = "";
for (let i = 0; i < clm; i++) {
  if (i % 2 === 0) {
    for (let j = 0; j < row; j++) {
      bag += arr[j][i] + " ";
    }
  }
  if (i % 2 === 1) {
    for (let j = row - 1; j >= 0; j--) {
      bag += arr[j][i] + " ";
    }
  }
}
console.log(bag);
