#include <stdio.h>
typedef struct{
    int id;
    int ch;

}T;
void swap(T *a,T *b){
    T temp=*a;
    *a=*b;
    *b=temp;


}
int main(){
    T *x;
    T *y;
    x->id=10;
    x->ch=20;
    y->id=220;
    y->ch=30;
    swap(x,y);
    printf("x:  %d %d\n", x->id,x->ch);
    printf("y:  %d %d", y->id,y->ch);
    return 0;
}