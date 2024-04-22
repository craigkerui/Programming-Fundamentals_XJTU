#include <stdio.h>
int afindmin(int a[3][5],int i){
    int j,min=a[i][0];
    for(j=1;j<5;j++){
       (a[i][j]<=min)?(min=a[i][j]):(min=min);
    }
    return min;
}//find the minist number of a row in an array
int cfindmin(int a[3][5],int j){
    int i,min=a[0][j];
    for(i=1;i<3;i++){
       (a[i][j]<=min)?(min=a[i][j]):(min=min);
    }
    return min;
}//find the minist number of a column in an array
int main(){
    int a[3][5],b[8],max=0,i;
    for(i=0;i<3;i++){
        scanf("%d%d%d%d%d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
        getchar();
    }
    for(i=0;i<3;i++){b[i]=afindmin(a,i);}
    for(i=3;i<8;i++){b[i]=cfindmin(a,i-3);}
    for(i=0;i<8;i++){(max>=b[i])?(max=max):(max=b[i]);}
    printf("%d",max);
}