#include <stdio.h>

int a,b;
int speed(int speedx,int speedy);
void menampilkan(int input1,int input2);
void mov_x();
void mov_y();
void mov_diagonal();
void outputmotor(int input[3]);
int motor[4]={0,0,0,0};



int main() {
    printf("Masukkan speed X = ");
    scanf("%d",&a);
    printf("Masukkan speed Y = ");
    scanf("%d",&b);
    speed(a,b);


    if(b==0){
        mov_x();
    } else if(a==0) {
        mov_y();
    } else if (a==b) {
        mov_diagonal();
    }

    return 0;    
}

int speed(int speedx,int speedy){
    menampilkan(speedx,speedy);
    return 0;
}

void menampilkan(int input1,int input2){
    printf("nilai speedx = %d\n",input1);
    printf("nilai speedy = %d\n",input2);
}

void mov_x(){
     if(a > 0) {
        printf("arah = maju\n");
        motor[0] = a;
        motor[1] = -1*a;
        motor[2] = -1*a;
        motor[3] = a;

    } else if(a < 0) {
        printf("arah = mundur\n");
        motor[0] = a;
        motor[1] = -1*a;
        motor[2] = -1*a;
        motor[3] = a;

    } else {
        printf("error");
    }
    outputmotor(motor);
}   

void mov_y(){
    if(b > 0) {
    printf("arah = kanan\n");
        motor[0] = b;
        motor[1] = b;
        motor[2] = -1*b;
        motor[3] = -1*b;
        

    } else if(b < 0) {
        printf("arah = kiri\n");
        motor[0] = b;
        motor[1] = b;
        motor[2] = -1*b;
        motor[3] = -1*b;
        

    } else {
        printf("error");
    }
    outputmotor(motor);
}

void mov_diagonal(){
    if(a > 0  && b > 0) {
        int arah;
        printf("keterangan : ""1 ""untuk maju serong kanan, ""2 ""untuk maju serong kiri\n""Masukan arah = ");
        scanf("%d",&arah);
        if(arah == 1 ){
            printf(" arah = maju ke kanan\n");
            motor[0] = a;
            motor[1] = a-b;
            motor[2] = -1*a;
            motor[3] = a-b;

        } else if (arah == 2) {
            printf(" arah = maju ke kiri\n");
            motor[0] = a-b;
            motor[1] = -1*a;
            motor[2] = a-b;
            motor[3] = b;
        }
        
    } else if(a < 0 && b < 0) {
        int arah;
        printf("keterangan : ""1 ""untuk mundur serong kanan, ""2 ""untuk mundur serong kiri\n""Masukan arah = ");
        scanf("%d",&arah);
        if(arah == 1 ){
            printf("arah = mundur ke kanan\n");
            motor[0] = a-b;
            motor[1] = -1*a;
            motor[2] = a-b;
            motor[3] = a;
        } else if (arah == 2) {
            printf("arah = mundur ke kiri\n");
            motor[0] = a;
            motor[1] = a-b;
            motor[2] = -1*a;
            motor[3] = a-b;
        }
        
    } 
    outputmotor(motor);
}

void outputmotor(int input[4]) {
    int i;
    for( i=0;i<=3;i++){
        printf("motor %d = %d\n",i,input[i]);
    }
}