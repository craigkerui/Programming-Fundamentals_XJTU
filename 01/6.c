#include <stdio.h>
int main(){
	int c1,c2,c3,n1,n2,n3;
	float m1,m2,m3,p1,p2,p3,e1,e2,e3,sum1,sum2,sum3;
	scanf("%d,%d,%f,%f,%f",&c1,&n1,&m1,&p1,&e1);
	getchar();
	scanf("%d,%d,%f,%f,%f",&c2,&n2,&m2,&p2,&e2);
	getchar();
	scanf("%d,%d,%f,%f,%f",&c3,&n3,&m3,&p3,&e3);
	sum1=m1+p1+e1;
	sum2=m2+p2+e2;
	sum3=m3+p3+e3;
	printf("%f\n%f\n%f",sum1,sum2,sum3);
	float o1=1e8*c1+1e5*sum1,o2=1e8*c2+1e5*sum2,o3=1e8*c3+1e5*sum3;
	printf("%f\n%f\n%f",o1,o2,o3);
	return 0;
}
