#include "../inc/libmx.h"

char *mx_strcat(char *s1, const char *s2) {
    if (s1 == NULL)
        return NULL;
    else if (s2 == NULL)
        return s1;
    s1 += mx_strlen(s1);
    char *res = s1;
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return res;
}
