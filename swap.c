#include <stdio.h>

int main(){
    int x = 5, y =10;
    x =x+y;
    y=x-y;
    x=x-y;
    printf("x = %d and y =%d" , x,y);

    return 0;
}