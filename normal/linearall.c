#include<stdio.h>
int main(){
    int arr[100];
    int x,key;
    printf("enter array size: ");
    scanf("%d", &x);
    printf("enter your lovely array lil bro: ");
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);

    }
    printf("enter your number to be found: ");
    scanf("%d",&key);
    int found=0;
    for(int i=0;i<x;i++){
        if(key==arr[i]){
            printf("your number was found at position: %d\n",i);
            found=1;
        }
        
        
    }
if(!found)
            printf("no occurences of your number exist");
            


    return 0;
}