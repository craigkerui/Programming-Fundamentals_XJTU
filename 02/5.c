#include <stdio.h>
int main(){
    int num,i=0,n;
    char a[10];
    gets(a);
    while(i<10&&a[i]!=0){
        i++;
    }
    printf("%d\n",i);
    for(n=0;n<i-1;n++){
        printf("%c ",a[n]);
    }
    printf("%c",a[i-1]);
}