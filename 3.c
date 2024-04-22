#include <stdio.h>
int main(){
	int n1,n2,n3;
	float m1,m2,m3,p1,p2,p3,e1,e2,e3;
	scanf("%d,%f,%f,%f",&n1,&m1,&p1,&e1);
	getchar();
	scanf("%d,%f,%f,%f",&n2,&m2,&p2,&e2);
	getchar();
	scanf("%d,%f,%f,%f",&n3,&m3,&p3,&e3);
	printf("%d,%7.1f,%7.1f,%7.1f\n%d,%7.1f,%7.1f,%7.1f\n%d,%7.1f,%7.1f,%7.1f",n1,m1,p1,e1,n2,m2,p2,e2,n3,m3,p3,e3);
	return 0;
}
