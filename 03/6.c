#include <stdio.h>
int main(){
    int a[100]={0},max,i;
    for(i=0;i<100&&a[i-1]!=-9999;i++){scanf("%d",&a[i]);}
    int n=i-2;
    int findmax(int a[100],int n);
    max=findmax(a,n);
    printf("%d",max);
}
int findmax(int a[100],int n){
    if(n==0){return a[0];}
    int x=findmax(a,n-1);
    return a[n]>x?a[n]:x;
}