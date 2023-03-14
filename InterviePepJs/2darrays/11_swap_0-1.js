let arr = [1, 0, 1, 0, 1, 1, 0, 1, 0, 0];
let start = 0;
let end = arr.length - 1;
let i = 0;
const swap = (i, j) => {
  let temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
  return temp;
};
while (start <= end) {
  if (arr[i] == 0) {
    swap(start, i);
    i++;
    start++;
  }
  if (arr[i] == 1) {
    swap(i, end);
    end--;
  }
}

for (let value of arr) {
  console.log(value + " ");
}
