void mx_str_reverse(char *s) {
    char *buf = s;
    int size = 0;
    char sbuf;
    while (*buf != '\0') {
        size++;
        buf++;
    }
    for (int i = 0; i < (size - 1) / 2; i++) {
        sbuf = s[i];
        s[i] = s[size - 1 - i];
        s[size - 1 - i] = sbuf;
    }
}
