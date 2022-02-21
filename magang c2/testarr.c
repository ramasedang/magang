#include <stdio.h>
int nilai[4]={0,0,0,0};

int motor[4]={0,0,0,0};

// nilai0=2
// nilai1=6
// nilai2=3

void fungsi_array(int input[3]);

int main() {
    fungsi_array(nilai);
    return 0;
}

void fungsi_array(int input[4]) {
    int i;
    for( i=0;i<=3;i++){
        printf("i = %d\n",i);
        printf("nilai %d\n",input[i]);
    }
}

