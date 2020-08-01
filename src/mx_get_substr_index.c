#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int i = 0, j = 0, id = -1;
    while (str[i] != '\0' ) {
        if (str[i] == sub[j]) {
            if (j == 0)
                id = i;
            j++;
        } else {
            j = 0;
        }
        i++;
        if (sub[j] == '\0')
            return id;
    }
    return -1;
}
