#include <unistd.h>
#include <stdio.h>

int  ft_stelen(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        // write(1, &str[i], 1);
        i++;
    }
        // write(1,&i + '0',2);
        return i;
}

int main() {
    char s[] = "future is loading";
    char *ss = s; 

    int nb=ft_stelen(s);
    printf("the string length is %d",nb);
    return 0;
}
