#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>

char *mx_strnew(const char size) {
	char *arr = malloc(size + 1);

	if(arr != NULL && size > 0) {
		for(int i = 0; i <= size+1; i++) 
					arr[i] = '\0';
		return arr;
	}
	return NULL;
}

int mx_strlen(const char *s) {
	int i = 0;

	while(s[i])
		i++;
	return i;
}

char *mx_strcpy(char *dst, const char *src) {
	int count = 0;

	while (src[count]) {
		dst[count] = src[count];
		count++; }
	dst[count] = '\0';
	return dst;
}

char *mx_strdup(const char *str) {
	int lenght = mx_strlen(str);
	char *arr = mx_strnew(lenght);
	mx_strcpy(arr, str);
	return arr;
}

char *mx_strcat_new(char *s1, const char *s2) {
	int lenght1 = mx_strlen(s1);
	int i = 0;

	while(s2[i]) {
		s1[lenght1] = s2[i];
		lenght1++;
		i++;
	}
	s1[lenght1] = '\0';
	return s1;
}

char *mx_strjoin(char const *s1, char const *s2) {
	if(s1 != NULL && s2 != NULL) {
		char *dubl_s1 = mx_strdup(s1);
		char *s1s2 = mx_strcat_new(dubl_s1, s2);
	return s1s2;
	}
	else if(s1 == NULL && s2 != NULL) {
		char *dubl_s2 = mx_strdup(s2);
		return dubl_s2;
	}
	else if(s2 == NULL && s1 != NULL) {
		char *dubl_s1 = mx_strdup(s1);
		return dubl_s1;
	}
	return NULL;
}

// int main() {
// 	const char *str1 = "this";
// 	const char *str2 = "dodge ";
// 	const char *str3 = NULL;
// 	printf("%s\n", mx_strjoin(str2, str1));
// 	printf("%s\n", mx_strjoin(str1, str3));
// 	printf("%s\n", mx_strjoin(str3, str3));
// 	return 0;
// }

