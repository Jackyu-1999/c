# include <stdio.h>
int main()
{
	float p0=1000,r1=0.2,r2=0.5,r3=0.1,p1,p2,p3;
	p1 = p0*(1+r1);
	p2 = p0*(1+r2);
	p3 = p0*(1+r3/2)*(1+r3/2);
	printf("p1=%f\n p2 = %f\n p3 = %f\n",p1,p2,p3);
	return 0;
}

