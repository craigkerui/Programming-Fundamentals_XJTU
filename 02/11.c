#include <stdio.h>
#include <string.h>
int main(){
    char a[3][80],i,j;
    int cap=0,lc=0,num=0,space=0,others=0;
    for(i=0;i<3;i++){
        gets(a[i]);
    }
    for(j=0;j<3;j++){
        for(i=0;(i<80&&a[j][i]!=0);i++){
            if(65<=a[j][i]&&a[j][i]<=90){cap+=1;}
            else if(97<=a[j][i]&&a[j][i]<=122){lc+=1;}
            else if(48<=a[j][i]&&a[j][i]<=57){num+=1;}
            else if(a[j][i]==32){space+=1;}
            else others+=1;
        }
    }
    printf("%d %d %d %d %d",cap,lc,num,space,others);
}