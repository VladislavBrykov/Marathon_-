#include <stdbool.h>

bool mx_isspace(char c) {
	return ((c >= 9 && c <= 13) || (c == 32));
}
