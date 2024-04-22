#include <stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for (i=0;i<n-1;i++){
        for (j=0;j<n;j++){  
        printf("*");
        }
    printf("\n");
    for (k=0;k<=i;k++){
        printf(" ");
    }
    }
    for (j=0;j<n;j++){
        printf("*");
    }
}