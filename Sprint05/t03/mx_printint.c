void mx_printchar(char c);

void mx_printint(int n) {
    long number = n;
    
    if (number < 0) {
		mx_printchar('-');
        number = (number * -1);
    }

    if (number >= 10)
        mx_printint(number / 10);
    mx_printchar(number % 10 + 48);
}

/*
int main() {
	mx_printint(-45756);
	return 0;
}
*/
