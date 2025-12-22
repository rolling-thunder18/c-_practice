#include <stdio.h>
int powe(int a, int b){
    int res=1;
    for(int i=0;i<b;i++){
        res=res*a;

    }
    return res;

}
int main(){
    int num;
    printf("emter ur number: ");
    scanf("%d",&num);
    int digit=0;
    int rev=0,sum=0;

    int temp=num;

    for(;temp>0;temp/=10){
        digit++;

    }
    printf("%d\n",num);
    temp=num;
    for(int i=0;i<digit;i++){
        rev=temp%10  ;
       

        sum+=powe(rev,digit);
        temp=temp/10;

    }
    
    printf("%d",sum);
    return 0;

}