#include<stdio.h>

int main() {
	char buf[100];

	printf("Enter : ");
	scanf("%[^#\n]", buf);
	int size = 0;
	for(int i = 0; buf[i] != '\0'; i++) {
		size++;
	}
	for(int i=0;i<size/2;i++){
	    char temp=buf[i];
	    buf[i]=buf[size-i-1];
	    buf[size-i-1]=temp;
	    
	}
		for(int i=0;i<size;i++){
		    printf("%c", buf[i]);
		}
	return 0;
}   