#include <stdio.h>
int main(){
    double a[20];
    a[0]=1.0;
    a[1]=2.0;
    int i,n;
    double num,sum=0;
    scanf("%d",&n);
    for (i=2;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    num=a[n-1]/a[n];
    for (i=1;i<=n;i++){
        sum=sum+a[i-1]/a[i];
    }
    printf("%g %g",num,sum);
}