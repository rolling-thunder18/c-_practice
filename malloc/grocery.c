/*You have to maintain a set of grocery items. Each grocery item has the 
following attributes: ID (Integer), Name (Char array), Price (float), Quantity 
(Integer). Implement the following functions:
• readGroceryList(): receives a count of grocery items as a function 
parameter, and reads the details of that many grocery items from the 
user and stores them in a dynamically allocated array, and returns it
• printGroceryList(): that receives an array of grocery items and its count 
as parameters, and prints the details of all the grocery items present in 
that array.
• findItem(): searches for the first grocery item in an array of grocery 
items, whose quantity is equal to qVal (function parameter) and returns 
that item
• findMaxPriceItem(): searches for the grocery item in an array of 
grocery items that has maximum price and returns it*/

#include<stdio.h>
typedef struct {
    int id;
    char name[100];
    float price;
    int quantity;

}item;
item *ptr;


int main(){

}