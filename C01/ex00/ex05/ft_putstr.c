#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}

int main() {
    char s[] = "future is loading";
    char *ss = s; 

    ft_putstr(s);
    return 0;
}
