#include <stdio.h>
int main(){
    int arr[10]={2,6,7,5,8,4,6,4,8,5};
    for(int i=0;i<10;i++){
        for(int j=0;j<9-i;j++){
            if(arr[j]>arr[j+1]){
 //               int temp=arr[j];arr[j]=arr[j+1];arr[j+1]=temp;
                arr[j]=arr[j]^arr[j+1];arr[j+1]=arr[j]^arr[j+1];arr[j]=arr[j]^arr[j+1];
            }
        }

    }

    for(int i=0;i<10;i++){
        printf(" %d ",arr[i]);
    }
}
