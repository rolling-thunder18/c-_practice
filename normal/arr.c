#include <stdio.h>
int main(){
    int arr[5];
    printf("enter ur array: ");
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        scanf("%d",&arr[i]);

    }
     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
        printf(" %d",arr[i]);
     
        int temp=0;
     int sec=0;
if(arr[0]<arr[1]){
    temp=arr[1];
    sec=arr[0];
}
else{
    temp=arr[0];
    sec=arr[1];

}
     printf("\n");

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    int v=arr[i];
    if(v>temp)
        {
            
            sec=temp;
            temp=v;

        }
    else if(v<temp && v>sec){
        sec=v;

    }
    }
    printf("%d",sec);
   
    return 0;
}