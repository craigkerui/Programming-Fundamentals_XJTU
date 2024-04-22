#include <stdio.h>
void printfroa(float a[4][6],int i){
    int j;
    for(j=0;j<2;j++){
        printf("%.0f,",a[i][j]);
    }
    for(j=2;j<5;j++){
        printf("%.1f,",a[i][j]);
    }
    printf("%.1f",a[i][5]);
}//print a row of an array
void print(float a[4][6],int x1,int x2,int x3,int x4){
    printfroa(a,x1);
    printf("\n");
    printfroa(a,x2);
    printf("\n");
    printfroa(a,x3);
    printf("\n");
    printfroa(a,x4);
}//print the array in a specific order
int main(){
    float a[4][6]={{1001,11,92.5,82.5,96,271},{1002,12,82.5,87.5,93.5,263.5},{1003,13,97,84.5,88.5,270}};
    scanf("%f\n%f\n%f\n%f\n%f",&a[3][0],&a[3][1],&a[3][2],&a[3][3],&a[3][4]);
    a[3][5]=a[3][2]+a[3][3]+a[3][4];
    if(a[3][1]<a[0][1]|(a[3][1]==a[0][1]&&a[3][5]<=a[0][5])){print(a,3,0,1,2);}
    else if(a[3][1]<a[1][1]|(a[3][1]==a[1][1]&&a[3][5]<=a[1][5])){print(a,0,3,1,2);}
    else if(a[3][1]<a[2][1]|(a[3][1]==a[2][1]&&a[3][5]<=a[2][5])){print(a,0,1,3,2);}
    else {print(a,0,1,2,3);}
}