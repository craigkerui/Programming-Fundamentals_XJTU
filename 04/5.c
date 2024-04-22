#include <stdio.h>
char *copykn(char *s1,char *s2,int n,int k){
    char *p1=&s1[n-1],*p2=s2;
    int i;
    for(i=0;i<k;i++){
        if(*p1==0) break;
        else *(p2++)=*(p1++);
    }
    return s2;
}
int main(){
    char s1[100]={0},s2[100]={0};
    int n,k;
    gets(s1);
    scanf("%d %d",&n,&k);
    puts(copykn(s1,s2,n,k));
    return 0;
}