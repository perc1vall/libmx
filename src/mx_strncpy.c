char* mx_strncpy(char* dst, const char* src, int len) {
    char* res = dst;
    int i=0;
    while (i < len && *src != '\0') {
        *dst = *src;
        src++;
        dst++;
        i++;
    }
    *dst = '\0';
    return res;
}
