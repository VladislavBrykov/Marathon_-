#include "file_to_str.h"

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

/*int main()
{
const char *str1 = "this";
const char *str2 = "dodge ";
const char *str3 = NULL;
printf("%s\n", mx_strjoin(str2, str1)); //returns "dodge this"
printf("%s\n", mx_strjoin(str1, str3)); //returns "this"
printf("%s\n", mx_strjoin(str3, str3)); //returns NULL
return 0;
}

