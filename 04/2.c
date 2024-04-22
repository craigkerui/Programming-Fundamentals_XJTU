#include <stdio.h>
int main(){
    int num[5],i,s,*p=num;
    for(i=0;i<5;i++){scanf("%d",&num[i]);}
    int sum(int *p, int n);
    s=sum(p,0);
    printf("%d",s);
}
int sum(int *p, int n){
    if(n==5){return 0;}
    int s;
    s=*(p++)+sum(p,n+1);
    return s;
}