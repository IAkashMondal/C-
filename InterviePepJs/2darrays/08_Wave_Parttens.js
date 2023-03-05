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
console.log("T: O(n^2) & S: O(n)");

// The time complexity of the code is O(N^2), where N is the total number of elements in the matrix. This is because the code iterates through each element of the matrix exactly once in the nested loops.

// The space complexity of the code is O(N), where N is the total number of elements in the matrix. This is because the code uses a string variable bag to store the elements in the desired order, and the size of the string variable is proportional to the number of elements in the matrix.

// Therefore, the overall time complexity of the code is quadratic in the size of the input matrix, and the space complexity is linear in the size of the input matrix.
