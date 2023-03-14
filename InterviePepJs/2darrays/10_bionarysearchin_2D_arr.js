let arr = [
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9, 10, 11, 12],
  [13, 14, 15, 16],
];
let k = 11;
let row = arr.length;
let clm = arr[0].length;
let start = 0;
let end = row * clm - 1;
let mid = Math.ceil(start + (start + end) / 2);

while (start < end) {
  let element = arr[mid / clm][mid % clm];
  if (k === element) {
    console.log("Search comlete . value:", k, "index:", element);
  }
  if (element < k) {
    start = mid + 1;
  } else {
    end = mid - 1;
  }
  mid = Math.ceil(start + (start + end) / 2);
}
