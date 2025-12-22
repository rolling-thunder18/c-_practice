#include <stdio.h>
int pascal(int n){
    
    for(int i=0;i<n;i++){
        int coeff=1;
        for(int j=0;j<n-i;j++){
            printf(" ");
        
        }
        for(int k=0;k<=i;k++){
            printf(" %d",coeff);
            coeff=coeff*(i-k)/(k+1);

         }
         
         printf("\n");
    
        }
        }





int main(){
int c;
scanf("%d", &c);
return pascal(c);

}