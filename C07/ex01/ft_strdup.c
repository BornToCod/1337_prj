#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int j=0;
char *strdup(char *src){
    int i=0;
    while(src[i] != '\0'){
        i++;
    }
    
    char *s;
    s=(char *)malloc( i);
    if(!(s) ){
        return NULL;
    }
    

    while(j < i){
     s[j]=src[j];
     j++;
    }
    s[j]='\0';


    return (s);

}


int main(){
    char a[]="abdelali";
    printf("the result is %s",strdup(a));
    
  return 0;
}
