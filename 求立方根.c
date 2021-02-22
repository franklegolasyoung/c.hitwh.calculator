#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	float a;
	float ak(float c);
	scanf("%f",&a);
	printf("立方根为%f",ak(a));
	return 0;
}
float ak(float c){
	float q,w;
	q=1;
	w=q*2/3+c/(3*q*q);
	while((fabs(w-q))>1e-6){
		q=w;
		w=q*2/3+c/(3*q*q);
	}
	return w;
}