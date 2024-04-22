#include <stdio.h>
int main(){
    int array[20]={0},i=0,j=0,t=0,length=0;
    for(i=0;i<20&&array[i-1]!=9999;i++){
        scanf("%d",&array[i]);
    }
    length=i-1;
    getchar();
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int *p;
        for(p=&array[length];p>array;p--){*p=*(p-1);}
        array[0]=array[length];
    }
    for(j=0;j<length;j++){printf("%d ",array[j]);}
}