#include <stdio.h>
int main(){
    float a[4][6]={{1001,11,92.5,82.5,96},{1002,12,82.5,87.5,93.5},{1003,13,97,84.5,88.5},{1004,12,95.8,85.6,74.9}};
    char name[4][5]={{'Z','h','a','o'},{'L','i'},{'Q','i','a','n'},{'S','u','n'}};
    int i;
    float sum(float array[6]);
    for(i=0;i<4;i++){a[i][5]=sum(a[i]);}
    void sort(float a1[4][6],char a2[4][5]);
    sort(a,name);
    for(i=0;i<4;i++) printf("%.0f,%.0f,%s,%.1f,%.1f,%.1f,%.1f\n",a[i][0],a[i][1],name[i],a[i][2],a[i][3],a[i][4],a[i][5]);
}
float sum(float array[6]){
    float s=array[2]+array[3]+array[4];
    return s;
}
void sort(float a1[4][6],char a2[4][5]){
    int i,j,k;
    float t;
    char temp;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if((a1[i][1]>a1[j][1])||(a1[i][1]==a1[j][1]&&a2[i][0]<a2[j][0])){
                for(k=0;k<6;k++){t=a1[i][k];a1[i][k]=a1[j][k];a1[j][k]=t;}
                for(k=0;k<4;k++){temp=a2[i][k];a2[i][k]=a2[j][k];a2[i][k]=temp;}
            }
        }
    }
}
