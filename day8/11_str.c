#include<stdio.h>
#include<string.h>

    struct student{
        char name[20];
        int roll_num;
        int marks;
    }st1,st2;
    int main(){
        strcpy(st1.name,"pandu");
        st1.marks=12;
        st1.roll_num=101;
        printf("student details : \n");
        printf("name :%s\n",st1.name);
        printf("roll no: %d\n",st1.roll_num);
        printf("marks: %d\n",st1.marks);
        strcpy(st2.name,"sana");
        st1.marks=13;
        st1.roll_num=102;
        printf("student details : \n");
        printf("name :%s\n",st2.name);
        printf("roll no: %d\n",st2.roll_num);
        printf("marks: %d\n",st2.marks);
    }
    
