#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int)) {
for(int i = 0; i < size; i++) {
	if(compare(arr[i], x))
		return i;
	}
	return -1;
}

/*
bool equal_nums(int a, int b) {
return a == b;
}

В задании сказано сдать всего одну функцию, поэтому bool комментируем.
*/


int main() {
	int arr[] = {1, 2, 3, 4, 5};
	printf("%d\n", mx_comparator(arr, 5, 2, equal_nums));
	return 0;
}
