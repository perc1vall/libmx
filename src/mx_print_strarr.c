#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    if(arr==NULL||delim==NULL)
        return;
    while(1) {
        if(*arr==NULL)
            break;
        mx_printstr(*arr);
        mx_printstr(delim);
        arr++;
    }
}
