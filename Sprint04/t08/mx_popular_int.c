int mx_popular_int(const int *arr, int size) {
  int f1 = arr[0];
  int f2 = arr[0];
  int f3 = 1;
  int f4 = 1;

  for(int i = 1; i < size; i++) {
    if(arr[i] == f1)
      f3++;
    else {
      if(f3 > f4) {
        f2 = arr[i-1];
        f4 = f3;
      }
      f1 = arr[i];
      f3 = 1;
    }
  }
  return f3 > f4 ? arr[size - 1] : f2;
}
