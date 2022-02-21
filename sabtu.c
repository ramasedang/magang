#include <stdio.h>
int nilai[3] = {4,2,3};
int i;

void fungsi_array(int input[3]);

int main()
{
    fungsi_array(nilai);
    return 0;
}

void fungsi_array(int input[3])
{
    for (i=0; i < 3; i++)
    {
       input[i] = input[i] * 2;
        printf("niali %d = %d\n",i+1, input[i]);
    }
}