#include<stdio.h>
int main(){
    int a=100;
    int *p=&a;

    p=(int)p;

    p=10;

    printf("%d %d\n",a,*p);
    printf("%p %p", p+1,&a);
    return 0;
}