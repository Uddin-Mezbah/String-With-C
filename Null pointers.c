#include<stdio.h>


int main(){

    int *ptr;

    char str[] = "Hello";

    char *first = str;
    char * ch = strchr(str, 'o');
    //printf("%p %lld",ch,ch);
    if(!ch){
        printf("Found Null. No occurence");
    }
    else{
        printf("Found");
    }

}






