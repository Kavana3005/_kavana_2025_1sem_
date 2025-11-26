#include<stdio.h>
int main(){
int a =  20;

int *ptr = &a;
printf("before changing value of a: %d \n",a);
*ptr=60;
printf("after changing value of a: %d \n",a);
(*ptr)++;
printf("after changing value of a: %d \n",a);
}

