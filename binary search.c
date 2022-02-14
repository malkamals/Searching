
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>
int iterativebinarySearch(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (array[mid] == x)
      return mid;
    if (array[mid] < x)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}
int main()
{
    int array[] = {12, 21, 30, 41, 52, 63, 74};
  int n = 7;
  int x = 74;
  int result = iterativebinarySearch(array,x,0, n - 1);
  if (result == -1)
    printf("Angka tidak ditemukan");
  else
    printf("angka ditemukan pada index %d", result);
    return 0;
}
