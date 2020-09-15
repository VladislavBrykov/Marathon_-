#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
	if (*src == 0)
		return NULL;
	
	int size = 0;
	int pr = 0;
	int file[src_size];

	for(int c = 0; c < src_size; c++) {
		for(int d = 0; d < size; d++) {
			if(file[d] == src[c]) {
				pr = 1;
			}
		}

		if(pr == 1)
			pr = 0;
		else {
			file[size] = src[c];
			size++;
		}
	}
	*dst_size = size;
	int *p;
	p = mx_copy_int_arr(file, size);
	return p;
}
