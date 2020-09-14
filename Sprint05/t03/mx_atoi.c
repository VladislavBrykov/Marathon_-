//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//bool mx_isdigit(int c) {
//	return(c > 47 && c < 58);
//}
//
//bool mx_isspace(char c) {
//	return(c > 7 && c < 14);
//}
//
//int mx_atoi(const char *str) {
//	long num = 0;
//	int sign = 1;
//	int index = 0;
//
//	if (mx_isspace(str[0])) {
//		for (; mx_isspace(str[index]); index++);
//	}
//	if (str[index] == '-' || str[index] == '+') {
//		sign = str[index] == '-' ? -sign: sign;
//		index++;
//	}
//
//	for (; str[index]; index++) {
//		if (mx_isdigit(str[index])) {
//			num = (num * 10) + (str[index] - '0');
//		}
//		else {
//			break;
//		}
//	}
//	return num != 0 ? num * sign : 0;
//}
//
//int main(void) {
//	char str[20] = "-9813";
//	printf("function: %d\n", atoi(str));
//	printf("my atoi: %d", mx_atoi(str));
//}
//
#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str) {
  int i = 0;
  int n = 0;
  int m = 1;
  if(str[0] == '-') {
    m = -1;
    i++;
  }
  while(mx_isdigit(str[i]) && !mx_isspace(str[i])) {
    n = n * 10 + str[i] - 48;
    i++;
  }
  return n * m;
}

