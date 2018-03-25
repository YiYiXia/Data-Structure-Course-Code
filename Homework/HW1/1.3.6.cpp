#include <stdio.h>

int main()
{
    int count=0, x=91, y=100;

    while(y>0){
        if(x>100){
            x-=10;
            y--;
        }
        else
            x++;
        count++;
    }

    printf("%d\n", count);
}
