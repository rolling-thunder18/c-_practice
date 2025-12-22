#include <stdio.h>
int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
    
    
}
int main() {
	int x;
	int a=0,b=1;
	printf("hi lmao enter ur number: ");
	scanf("%d",&x);
	printf("the iterative way: \n");
	
	for(int i=1; i<=x; i++) {
	printf("  %d",a);
		int temp=a+b;
		a=b;
		b=temp;
		
		
	
	}
	printf("\n");
	
	printf("the revursive way: \n");


	for(int i=0;i<x;i++){
	    printf("  %d",fib(i));
	    
	}
	
	return 0;
}