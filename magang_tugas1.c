#include<stdio.h>
#include<string.h>

int main()
{
    int angka[100];
    int x,y,z,n;

    printf("Masukkan jumlah data:");
    scanf("%d",&n);

    for (x = 0; x<n;x++)
    {
        printf("Masukkan data ke-%d:",x+1);
        scanf("%d",&angka[x]);
    }

    for (x = 0; x<n;x++)
    {
        for (y = x+1; y<n;y++)
        {
            if (angka[x]>angka[y])
            {
                z = angka[x];
                angka[x] = angka[y];
                angka[y] = z;
            }
        }
    }

    printf("Data setelah diurutkan\n");
    for (x = 0; x<n;x++)
    {
        printf("% d ",angka[x]);
    }

}