//Write int maxIndex(int arr[], int n) that returns the index of the largest element. If multiple maxima exist, return the first index.
#include<stdio.h>
int maxindex(int arr[],int n){
    int temp=arr[0],index=1;
    for(int i=0;i<n;i++){
        if(temp<=arr[i]){
        temp=arr[i];
            index=i+1;
    }
    }
return index;

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

    int rev=maxindex(brr,x);
    printf("position with highest number is: %d",rev);
    return 0;

}