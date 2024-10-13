#include <stdio.h>

char *ft_strncpy(char *dest, char *src,unsigned int n) {
    int i = 0;
    while (i<n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
    dest[i] = '\0';
    return dest;
}

int main() {
    char sr[] = "abdel";
    char s[50]; 

    ft_strncpy(s, sr,50);

    printf("Result is: %s\n", s);

    return 0;
}
