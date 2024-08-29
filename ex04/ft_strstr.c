char *ft_strstr(char *str, char *to_find) {
    if (!*to_find) return str;
    while (*str) {
        char *begin = str;
        char *pattern = to_find;
        while (*str && *pattern && *str == *pattern) {
            str++;
            pattern++;
        }
        if (!*pattern) return begin;
        str = begin + 1;
    }
    return 0;
}
