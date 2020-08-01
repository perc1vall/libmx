#include "../inc/libmx.h"

int mx_count_substr(const char* str, const char* sub) {
    char* buf = mx_strstr(str, sub);
    int count = 0;
    while (buf != NULL) {
        count++;
        buf = mx_strstr(buf + 1, sub);
    }
    return count;
}
