#include <stdio.h>
void printfroa(float a[4][6],int i){
    int j;
    for(j=0;j<2;j++){
        printf("%.0f,",a[i][j]);
    }
    for(j=2;j<5;j++){
        printf("%.1f,",a[i][j]);
    }
    printf("%.1f\n",a[i][5]);
}//print a row of an array
int main(){
    float a[4][6]={{1001,11,92.5,82.5,96,271},{1002,12,82.5,87.5,93.5,263.5},{1003,13,97,84.5,88.5,270}};
    scanf("%f%f%f%f%f",&a[3][0],&a[3][1],&a[3][2],&a[3][3],&a[3][4]);
    a[3][5]=a[3][2]+a[3][3]+a[3][4];
    int i,j;
    for(i=0;i<3;i++){
        if(a[i][0]==a[3][0]){
            for(j=1;j<6;j++){a[i][j]=a[3][j];}
        }
    }
    for(i=0;i<3;i++){
        printfroa(a,i);
    }
}