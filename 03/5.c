#include <stdio.h>
int main(){
    int n,ans;
    scanf("%d",&n);
    int fib(int n);
    if(n<=0||n%1!=0){printf("ERROR");}
    else{
        ans=fib(n);
        printf("%d",ans);
    }
}
int fib(int n){
    int ans;
    if(n==1||n==2){return 1;}
    else{
        ans=fib(n-1)+fib(n-2);
        return ans;
    }
}