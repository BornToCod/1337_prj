#include <stdio.h>
#include <stdbool.h>
bool ft_ischar(char c){
    if(( c >='A'  && c <= 'Z') || ( c >='a'  && c <= 'z') ){
        return true;
    }
    return false;
}
bool ft_isupper(char c){
    if(( c >='A'  && c <= 'Z') ){
        return true;
    }
    return false;
    
}
bool ft_islower(char c){
    if(( c >='a'  && c <= 'z') ){
        return true;
    }
    return false;
}
char ft_tolower(char c){
    if(( c >='A'  && c <= 'Z') ){
        c=c + 32;
        return c;
    }
    return c;
}
char ft_toupper(char c){
    if(( c >='a'  && c <= 'z') ){
        c=c - 32;
        return c;
    }
    return c;
}

bool word=false;
char *ft_strcapitalize(char *str) {
    if(ft_ischar(str[0]) && ft_islower(str[0])){
        str[0]=ft_toupper(str[0]);
    }
    int i = 1;
    while (str[i] != '\0') {
        if(ft_ischar(str[i]) && ft_islower(str[i]) && word==true){
            str[i]=ft_toupper(str[i]);
            word=false;
        }
        else if (ft_ischar(str[i]) && ft_isupper(str[i]) && word==false) {
            str[i]=ft_tolower(str[i]);
            word=false;
        }
        else if (str[i] >= '0' && str[i] <= '9'){
            word=false;
        }

        else if(!ft_ischar(str[i])){
            word=true;
        }
        
        i++;
    }
    return (str);
}

int main() {
    char sr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(sr);
    printf("Result is: %s\n", sr);
    return 0;
}
