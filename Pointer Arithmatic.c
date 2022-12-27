#include<stdio.h>

int main(){

    //char ch = 'a';
    //int number  = 20;
    double number  = 20;
    //char *pch = &ch;
    //int *pnumber = &number;
    double *pnumber = &number;
    //printf("Address %lld which contains %c\n",pch,*pch);
    printf("pnumber address %lld\n",number);

    //pch++;
    pnumber++;
    printf("Now pch address %lld\n",pnumber);


}

