unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int d_len = 0;
    unsigned int s_len = 0;

    while (dest[d_len] && d_len < size) d_len++;
    while (src[s_len]) s_len++;

    if (d_len == size) return size + s_len;

    unsigned int i = 0;
    while (src[i] && d_len + i < size - 1) {
        dest[d_len + i] = src[i];
        i++;
    }
    if (d_len + i < size) dest[d_len + i] = '\0';

    return d_len + s_len;
}
