#include <stdio.h>
#include <stdlib.h>
void func(int a,int b){
    a=5;
    b=10;
    int*p=&a;
    int *q=&b;
    *p=*p^*q;
    *q=*p^*q;
    *p=*p^*q;
    printf("%d %d",*p,*q);
}
int main(){

void func(int x,int y);
    return 0;
}
/*ID: 3 Price: 99.50
Define a struct, allocate one object dynamically, store values, and print.

struct item s{
    int *p=malloc(sizeof(int));

}*/
