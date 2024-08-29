char *ft_strncat(char *dest, char *src, unsigned int nb) {
    char *d = dest;
    while (*d) d++;
    while (nb-- && (*d++ = *src++));
    if (nb == 0) *d = '\0';
    return dest;
}
