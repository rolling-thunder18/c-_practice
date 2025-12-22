#include<stdio.h>
int rev(int arr[],int x){
    for(int i=0;i<x/2;i++){
        int temp=arr[i];

        arr[i]=arr[x-i-1];
        arr[x-i-1]=temp;

    }
    return 0;
}
int main(){
    int brr[100];
    int x;
    printf("enter array size: ");
    scanf("%d",&x);
    printf("enter your array: ");

    for(int i=0;i<x;i++){
        scanf("%d",&brr[i]);

    }
    int sec=rev(brr,x);
    printf("your reversed array is: ");
    for(int i=0;i<x;i++){
        printf(" %d", brr[i]);
    }
    return 0;
}