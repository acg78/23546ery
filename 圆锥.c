#include<stdio.h>
#define p 3.141592
int main()
{
	
	double r,h,s,v;
	printf("������r.h:\n");
	scanf("%lf,%lf",&r,&h);
	s=p*r*r;
	v=1.00/3.00*p*r*r*h;
	printf("�����=%.2lf\n���=%.2lf",s,v);
	system("pause"); 
	return 0;
}
