#include<stdio.h>
#include <stdlib.h>

int main(){
    int *p=malloc(5*sizeof(int));
    printf("enter ur number mig: ");
    for(int i=0;i<=sizeof(*p);i++){
        scanf("%d", p+i);
    }
    printf("ur allocated array: ");
     for(int i=0;i<=sizeof(*p);i++){
    printf(" %d",*(p+i));
     }
  
    p=NULL;
    printf(" %d",*(p));
    int *x;
    free(x);
    free(p);
    return 0;


}