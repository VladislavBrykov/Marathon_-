#include "file_to_str.h"

int mx_strlen(const char *s) {
	int i = 0;
	
	while(s[i])
		i++;
	return i;
}


