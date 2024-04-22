#include <stdio.h>
#include <string.h>
int main(){
    char a[10],b[10];
    int i;
    gets(a);
    gets(b);
    i=strcmp(a,b);
    printf("%d",i);
    //for(i=0;i<10;i++){
     //   if(a[i]>b[i]){printf("1");break;}
     //   else if (a[i]==b[i]){printf("0");continue;}
     //   else printf("-1");break;
    //}
}