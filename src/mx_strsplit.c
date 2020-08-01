#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (s == NULL)
        return NULL;
    int len = mx_strlen(s);
    if (len == 0)
        return NULL;
    int wordcount = 1;
    for (int i = 0; i < len; i++) {
        if (s[i] == c)
            wordcount++;
    }
    char **res = (char **) malloc((wordcount + 1) * sizeof(char *));
    res[wordcount] = NULL;
    int *word_len_arr = (int *) malloc((wordcount) * sizeof(int));
    int *word_pos_arr = (int *) malloc((wordcount) * sizeof(int));
    int prev = -1;
    word_pos_arr[0] = 0;
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == c) {
            word_len_arr[j] = i - prev - 1;
            word_pos_arr[j + 1] = i + 1;
            prev = i;
            j++;
        }
    }
    word_len_arr[j] = len - prev - 1;
    for (int i = 0; i < wordcount; ++i) {
        res[i] = mx_strndup(s + word_pos_arr[i], word_len_arr[i]);
    }
    return res;
}
