#include "file_to_str.h"

char *mx_strnew(const int size) {
	char *arr = malloc(size * sizeof(*arr) + 1);

	if(arr != NULL && size > 0) {
		for(int i = 0; i <= size+1; i++) 
					arr[i] = '\0';
		return arr;
	}
	return NULL;
}

/*int main()
{
	printf("%s\n", mx_strnew(10));
	return 0;
}
