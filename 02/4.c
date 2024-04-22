#include <stdio.h>
int main(){
    int m,n,a,b,c,GCD,LCM;
    scanf("%d %d",&m,&n);
    if(m<n){a=n;n=m;m=a;}
    b=m*n;
    while(n!=0){
        c=m%n;
        m=n;
        n=c;
    }
    GCD=m;
    LCM=b/GCD;
    printf("%d %d",GCD,LCM);
    return 0;
}