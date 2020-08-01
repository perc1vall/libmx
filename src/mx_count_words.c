int mx_count_words(const char* str, char delimiter) {
    char* buflast = (char*)str;
    int res = 0;
    int counter = 0;
    int first = 0;
    while (*buflast != '\0') {
        if (res == 0 && *buflast != delimiter) {
            res++;
            first = 1;
        }
        if (first == 1 && *buflast == delimiter) {
            counter = 0;
            first = 0;
        }
        else if (*buflast == delimiter && counter != 0) {
            res++;
            counter = 0;
        }
        else if (*buflast == delimiter)
            counter = 0;
        else
            counter++;
        buflast++;
    }
    if (counter != 0)
        res++;
    return res;
}
