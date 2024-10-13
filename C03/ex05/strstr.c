#include <stdio.h>

char *ft_strstr(char *str, char *to_find) {
    int i = 0;
    int j;

    // If to_find is an empty string, return str
    if (to_find[0] == '\0') {
        return str;
    }

    // Iterate over each character of str
    while (str[i] != '\0') {
        j = 0;

        // Check if the substring to_find starts at position i
        while (str[i + j] == to_find[j]) {
            j++;

            // If we reach the end of to_find, we found the substring
            if (to_find[j] == '\0') {
                return &str[i];
            }
        }

        i++;
    }

    // If to_find is not found in str, return NULL
    return NULL;
}

int main() {
    char str[] = "Hello, world!";
    char to_find[] = "world";

    char *result = ft_strstr(str, to_find);
    if (result != NULL) {
        printf("Found substring: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
