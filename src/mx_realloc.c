#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    void *real;

    real = mx_strnew(size);
    mx_memset(real, 0, size);
    if (real) mx_memcpy(real, ptr, size);
    mx_strdel(ptr);
    return (real);
}
