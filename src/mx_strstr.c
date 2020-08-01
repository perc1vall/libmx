#include "../inc/libmx.h"

char* mx_strstr(const char* s1, const char* s2) {
    char* find = mx_strchr(s1, *s2);
    int s2len = mx_strlen(s2);
    while (find != NULL) {
        if (!mx_strncmp(find, s2, s2len)) {
            return find;
        }
        else
            find = mx_strchr(find + 1, *s2);
    }
    return NULL;
}
