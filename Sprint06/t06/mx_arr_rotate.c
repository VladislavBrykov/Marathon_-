void mx_arr_rotate(int *arr, int size, int shift) {
  int tempor;

  if (shift < 0)
    shift = size + shift;
  for (int i = 0; i < shift; ++i) {
    tempor = arr[size - 1];
    for (int j = size - 1; j > 0; --j)
      arr[j] = arr[j - 1];
    arr[0] = tempor;
  }
}
