#include "file_to_str.h"

char *mx_strdup(const char *str) {
	int lenght = mx_strlen(str);
	char *arr = mx_strnew(lenght);
	mx_strcpy(arr, str);
	return arr;
}

/*int main() {
	char str[6] = "Hello";
	printf("%s\n", mx_strdup(str));
	return 0;
}
