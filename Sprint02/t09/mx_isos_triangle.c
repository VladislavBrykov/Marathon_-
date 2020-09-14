#include <unistd.h>

void mx_printchar(char c) {
	write(1, &c, 1);
}

void mx_isos_triangle(unsigned int length, char c) {
	for(unsigned int i=0; i<=length; i++) {
		for(unsigned int j=0; j<=i; j++)
			mx_printchar(c);
		mx_printchar('\n');
	}
}

int main() {
	mx_isos_triangle(4, '#');
	return 0; 
}
