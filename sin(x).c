#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	double a=0.0,i,b,dd,pi=3.1415926535897932384626;
	int k=1,sum=0;
	scanf("%lf",&dd);
	b=dd*pi/180;
	i=b;
	while(fabs(i)>1e-6){
		a+=i;
		k+=2;
		i*=(-1)*b*b/(k*(k-1));
		sum++;
	}
	printf("sin(%.2lf)=%lf\n%d",dd,a,sum);
	return 0;
}