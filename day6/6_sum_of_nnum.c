#include<stdio.h>
int main(){
    int n ,sum =0;
    printf("enter a number: ");
   scanf("%d",&n);
   // int i = 1;
   // while(i<=n){
    //    sum+=i;
    //    i++;
   // }
   sum = (n*(n+1))/2;
    printf("sum is: %d",sum);
}

    #include<stdio.h>
int nNaturalNo(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);//5 -->15
    int res = nNaturalNo(n);
    printf("res: %d",res);
}
int nNaturalNo(int n){
    int sum =0;
    int i = 1;
    while(i<=n){
        sum+=i; //sum=sum+i;
        i++;
    }
    return sum;
}



