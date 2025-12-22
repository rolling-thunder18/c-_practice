#include<stdio.h>
#include <stdlib.h>

int main(){
 int **p=malloc(5*sizeof(int*));
 for(int i=0;i<5;i++){
    p[i]=calloc( 5,sizeof(int));

 }
 printf("enter ur array: \n");
 for(int i=0;i<5;i++){
   printf("row %d: ",i+1);
    for(int j=0;j< 5;j++){
    
    
   int res= scanf("%d",&p[i][j]);
    if(res!=1){
        char trash[20];
        scanf("%s",trash); 
        break;
    }
    }
    printf("\n");
 }
 printf("so u chose: \n");
 for(int i=0;i<5;i++){
    printf("row %d: ",i+1);
    for(int j=0;j< 5;j++){
    
    

    printf(" %d",p[i][j]);
    }
    printf("\n");
 }
 int **t=malloc(5*sizeof(int*));
 for(int i=0;i<5;i++){
    t[i]=calloc( 5,sizeof(int));

 }

 printf("the transpose of the entered array is: \n");
 for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        t[i][j]=p[j][i];

    }
 }
  for(int i=0;i<5;i++){
    printf("row %d:",i+1);
    for(int j=0;j<5;j++){
       printf(" %d",t[i][j]);

    }
    printf("\n");
 }
for(int i=0;i<5;i++){
    free(p[i]);
    free(t[i]);
}

free(p);
p=NULL;
return 0;

}