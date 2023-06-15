
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
let mid = Math.floor((start + end) / 2);

while (start <= end) {
  let element = arr[Math.floor(mid / clm)][mid % clm]; // mid / clm)= row Index , cloum index =[mid % clm]
  if (k === element) {
    console.log("Search complete. Value:", k, "Index:", mid);
    break;
  }
  if (element < k) {
    start = mid + 1;
  } else {
    end = mid - 1;
  }
  mid = Math.floor((start + end) / 2);
}
