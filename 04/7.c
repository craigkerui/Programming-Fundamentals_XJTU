#include <stdio.h>
int findint(char *s,int *a){
    int i=0,j=0,k=0,n=0,sum=0;
    char temp[20]={0};
    char *p1=s,*p2=temp;
    int *p3=a;
    for(i=0;i<100;i++){
        if(*(p1+i)<='9'&&*(p1+i)>='0'){*(p2++)=*(p1+i)-'0';k++;}
        else if(*(p1+i-1)<=57&&*(p1+i-1)>=48){
            p2=temp;
            for(j=0;j<k;j++){
                sum=*p2+10*sum;
                *p2=0;
                p2++;
            }
            p2=temp;
            *(p3++)=sum;
            sum=0;
            k=0;
            n++;
        }
    }
    return n;
}
int main(){
    char str[100];
    int a[20]={0},n,i;
    gets(str);
    n=findint(str,a);
    for(i=n-1;i>0;i--){printf("%d,",a[i]);}
    printf("%d",a[0]);
}