#include <stdio.h>

#define MAXSIZE 100 // Maximum string size
int main() {
 char strA[MAXSIZE], strB[MAXSIZE];
 char * str1 = strA;
 char * str2 = strB;
 /* Input two strings from user */
 printf("Enter first string: ");
 gets(strA);
 printf("Enter second string: ");
 gets(strB);
 while(); //Move till the end of strA

 while(); //Copy strB to strA
 printf("Concatenated string = %s", strA);
 return 0;
}