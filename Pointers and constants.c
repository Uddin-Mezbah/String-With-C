#include<stdio.h>

int main(){
    const int N = 20;
    const int* const pN = &N;

    printf("%p has value %d\n",pN,*pN);

    //const int  *pN = &N;

    //*pN = 20;
    int M = 100;
    *pN = 100;

    printf("%p has value %d",pN,*pN);

}



