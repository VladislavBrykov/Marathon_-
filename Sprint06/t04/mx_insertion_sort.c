int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
  int i, j;
  char *key;
  int shift = 0;

  for (i = 1; i < size; ++i) { 
    for (j = i; j > 0 && mx_strlen(arr[j - 1]) > mx_strlen(arr[j]); --j) {
      key = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = key;
      shift++;
    } 
  }
  return shift;
}
