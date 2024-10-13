unsigned int ft_strlcpy(char *dest, const char *src, unsigned int n) {
    unsigned int i = 0;
    unsigned int src_length = 0;

    while (src[src_length] != '\0') {
        src_length++;
    }

    if (n > 0) {
        while (i < n - 1 && src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    return src_length;
}

int main() {
    char sr[] = "abdelali";
    char s[10]; 

    unsigned int length_copied = ft_strlcpy(s, sr, 8);

    printf("Result is: %u\n", length_copied); 
    printf("Copied string: %s\n", s); 

    return 0;
}
