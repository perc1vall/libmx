void mx_swap_char(char *s1, char *s2) {
    *s1 = (char) (*s1 + *s2);
    *s2 = (char) (*s1 - *s2);
    *s1 = (char) (*s1 - *s2);
}
