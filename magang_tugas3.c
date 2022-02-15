#include <stdio.h>

int main(){
    int n;
    int i;
    int x;
    printf("Masukkan panjang pola:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (x = 1; x <= i; x++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
    
}