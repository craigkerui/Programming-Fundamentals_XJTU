#include <stdio.h>
int main(){
	int n1,n2,n3;
	float m1,m2,m3,p1,p2,p3,e1,e2,e3,sum1,sum2,sum3;
	scanf("%d,%f,%f,%f",&n1,&m1,&p1,&e1);
	getchar();
	scanf("%d,%f,%f,%f",&n2,&m2,&p2,&e2);
	getchar();
	scanf("%d,%f,%f,%f",&n3,&m3,&p3,&e3);
	sum1=m1+p1+e1;
	sum2=m2+p2+e2;
	sum3=m3+p3+e3;
	if(sum1>=sum2&&sum1>=sum3){
	printf("%d,%.1f\n",n1,sum1);
	sum2>=sum3?printf("%d,%.1f\n%d,%.1f",n2,sum2,n3,sum3):printf("%d,%.1f\n%d,%.1f",n3,sum3,n2,sum2);}
	else if(sum2>sum3&&sum2>sum1){
	printf("%d,%.1f\n",n2,sum2);
	sum1>=sum3?printf("%d,%.1f\n%d,%.1f",n1,sum1,n3,sum3):printf("%d,%.1f\n%d,%.1f",n3,sum3,n1,sum1);}
	else {
	printf("%d,%.1f\n",n3,sum3);
	sum1>=sum2?printf("%d,%.1f\n%d,%.1f",n1,sum1,n2,sum2):printf("%d,%.1f\n%d,%.1f",n2,sum2,n1,sum1);}
	return 0;
}
