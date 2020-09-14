#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    int p = 0;
    int b;
    int s;
    int n = num;
    
    for (int i = n; i > 0; i /= 10) {
        p++;

    while(n != 0) {
        b = n % 10;
        s = s + mx_pow(b, p);
        n = n/10;
    }

    if(s == n)
        return true;
    else
        return false;
}
