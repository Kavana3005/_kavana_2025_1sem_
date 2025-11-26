#include<stdio.h>
int main(){
     int a = 20;
    int *p = &a;
    printf("value of a : %d\n", a);
    printf("value of p  : %p\n", p);
    printf("value of a : %d\n",*p);
    printf("value of p:%p\n",&a);
    printf("value of a : %d\n",*(&a));
    printf("value of p:%p\n",*(&p));
}


