#include <stdlib.h>

int mx_count_words(const char *str, char delimiter);
char *mx_strncpy(char *dst, const char *src, int len);	
char *mx_strnew(const int size);

char **mx_strsplit(char const *s, char c) {
    
    if (s == 0)
        return 0;

    int massiv = mx_count_words(s, c);
    char **result = (char **) malloc(sizeof(char *) * (massiv + 1));
    result[massiv] = 0;

    for (int p = 0; p < massiv; p++) {
        while (*s == c)
            s++;
        char *peremennaia = (char *) s;
        int dlina = 0;
        while (*s != c) {
            dlina++;
            s++;
        }

        char *word = mx_strnew(dlina);
        mx_strncpy(word, peremennaia, dlina);
        result[p] = word;
    }
    return result;
}
