#include<stdio.h>
int main(){
    int num=0, res =1;
    printf("enter a number: ");
    scanf("%D",&num);
    while(num>=1){
        res = res * num;
        num--;
    }
    printf("factorial is : %d \n",res);
}
    
