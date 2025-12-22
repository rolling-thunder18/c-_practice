#include <stdio.h>
int main(){
    typedef struct{
        int y;
        char arr[10];
    }x;
    x *p;
    x s1;
    
    p=&s1;
    s1.y=1313;
    p->y=10;
    printf("%d",p->y);
    return 0;


}