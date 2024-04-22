#include <stdio.h>
int isPrime(int n){
    if(n==1) return 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a,b,c,i,j=0,P[10];
    for (i=3000;i<=6000;i++){
        a=i/1000;
        b=i/100;
        c=i/10;
        if(isPrime(a)&&isPrime(b)&&isPrime(c)&&isPrime(i)){
            P[j]=i;
            j++;
        }
    }
    printf("%d",P[2]);
}