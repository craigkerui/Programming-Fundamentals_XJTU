#include <stdio.h>
#include <stdlib.h>
int main(){
    char str1[20]={0},str2[20]={0};
    int result=0,i=0,j=0;
    gets(str1);
    gets(str2);
    char *p1=str1,*p2=str2;
    for(i=0;i<20;i++){
        if(*p1==*p2){result=0;}
        else if(*p1>*p2){result=1;break;}
        else{result=-1;break;}
        p1++;
        p2++;
    }
    printf("%d",result);
}