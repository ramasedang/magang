#include<stdio.h>
#include<string.h>



int main()
{
    int x = 1;
    int y = 2;
    int z = 3;

    printf("Before swap : %d,%d\n",x,y);
    //proses swap
    x = y;
    y = z;
    
    printf("After swap : %d,%d", x,y);

    return 0;
}
