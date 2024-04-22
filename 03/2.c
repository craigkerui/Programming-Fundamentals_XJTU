#include <stdio.h>
#include <math.h>
void find(int a,int b,int num[5]){
    int i,j,k=0;
    for(i=a;i<b;i++){
        j=sqrt(i);
        if(i==j*j){num[k]=i;k++;}
    }
}
int main(){
    int num[5]={0},i;
    find(500,600,num);
    for(i=0;i<5&&num[i]!=0;i++){printf("%d\n",num[i]);}
}