#include <stdbool.h>
  
int mx_tolower(int c) {
	if (c > 64 && c < 91) {
		c += 32;
	}
	return c;
}

/*
int main() {
	mx_tolower('f');
}
*/
