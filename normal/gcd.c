/*8. Find GCD of two numbers (loop version)
No recursion, Euclid loop only.*/

#include <stdio.h>
int gcd(int a,int b){
    
    while(a!=0){
        int rev=a;
        a=b%a;
        b=rev;
       
    } return b;
}
int main(){ 
    int a,b;
    printf("enter ur numbers: ");
    scanf("%d %d",&a,&b);
  int rev=gcd(a,b);
  printf("gcd is: %d",rev);

    return 0;

}