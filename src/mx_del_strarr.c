#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
    if (arr == NULL)
        return;
    int i = 0;
    while (arr[0][i] != NULL) {
        free(arr[0][i]);
        arr[0][i] = NULL;
        i++;
    }
}
