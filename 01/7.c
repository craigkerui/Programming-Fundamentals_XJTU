#include <stdio.h>
int main(){
	int c1,c2,c3,n1,n2,n3,exc=0,exn=0;
	float m1,m2,m3,p1,p2,p3,e1,e2,e3,sum1,sum2,sum3,exsum=0;
	scanf("%d,%d,%f,%f,%f",&c1,&n1,&m1,&p1,&e1);
	getchar();
	scanf("%d,%d,%f,%f,%f",&c2,&n2,&m2,&p2,&e2);
	getchar();
	scanf("%d,%d,%f,%f,%f",&c3,&n3,&m3,&p3,&e3);
	sum1=m1+p1+e1;
	sum2=m2+p2+e2;
	sum3=m3+p3+e3;
	if(c1>c2){
		exc=c2;c2=c1;c1=exc;
		exn=n2;n2=n1;n1=exn;
		exsum=sum2;sum2=sum1;sum1=exsum;
	}
	else if(c1==c2){
		if(sum1<sum2){
			exn=n2;n2=n1;n1=exn;
			exsum=sum2;sum2=sum1;sum1=exsum;
		}
	}
	if(c2>c3){
		if(c3>c1){
			printf("%d,%d,%.1f\n%d,%d,%.1f\n%d,%d,%.1f",c1,n1,sum1,c3,n3,sum3,c2,n2,sum2);
		}
		else if(c3==c1){
			if(sum3>sum1) exsum=sum1;sum1=sum3;sum3=exsum;
			printf("%d,%d,%.1f\n%d,%d,%.1f\n%d,%d,%.1f",c1,n1,sum1,c3,n3,sum3,c2,n2,sum2);
		}
		else printf("%d,%d,%.1f\n%d,%d,%.1f\n%d,%d,%.1f",c3,n3,sum3,c1,n1,sum1,c2,n2,sum2);
	}
	else if(c3==c2){
		sum3>sum2?printf("%d,%d,%.1f\n%d,%d,%.1f\n%d,%d,%.1f",c1,n1,sum1,c3,n3,sum3,c2,n2,sum2):printf("%d,%d,%.1f\n%d,%d,%.1f\n%d,%d,%.1f",c1,n1,sum1,c2,n2,sum2,c3,n3,sum3);
	}
	else printf("%d,%d,%.1f\n%d,%d,%.1f\n%d,%d,%.1f",c1,n1,sum1,c2,n2,sum2,c3,n3,sum3);
	return 0;
}
