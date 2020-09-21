#include <unistd.h>
#include <time.h>
#include <stdio.h>

double mx_timer(void (*f)()) {
	clock_t start = clock();
	/*f("qwweertyyuiuojfhdfhdfhdgjgfjfhjhgkgjkjhljhljkjk");*/
	f();
	clock_t finish = clock();

	if(start == finish)
		return -1;

	return(double)(finish - start)/CLOCKS_PER_SEC;
}


/*void mx_strlen(const char *s) {
	for(int i = 0; s[i] != '\0'; i++)
		printf("%c", s[i]);

}

int main() {
double a = mx_timer(mx_strlen);
printf("%f", a);
}
*/

