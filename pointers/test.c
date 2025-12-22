/*void printPascalsTriangle(int n) {
 for (int i = 0; i < n; i++) {
 int coefficient = 1;
 for () { //Add leading spaces for alignment
 printf(" ");
 }
 for () { //Print the numbers (coefficients)
 printf("%d ", coefficient);
  //Update the coefficient for the next term
 }
 printf(“\n”);
 }
} */
#include <stdio.h>
void printPascalsTriangle(int n) {
 for (int i = 0; i < n; i++) {
 int coefficient = 1;
 for (int j=0;j<n-i;j++) { //Add leading spaces for alignment
 printf(" ");
 }
 for (int k=0;k<=i;k++) { //Print the numbers (coefficients)
 printf("%d ", coefficient);
coefficient=coefficient*(i-k)/(k+1);
  //Update the coefficient for the next term
 }
 printf("\n");
 }
 
 printf("\a");
} 
int main(){
    int n=5;
    int y;
printPascalsTriangle(n);
return 0;
 

}