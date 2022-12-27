#include<stdio.h>

void makDouble(int* a){

    *a *= 2;


}

int main(){
   int x = 10;
   makDouble(&x);
   printf("%d",x);

}




