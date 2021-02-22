#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	float a;
	float ak(float c);
	scanf("%f",&a);
	printf("平方根为%f",ak(a));
	return 0;
}
float ak(float c){
	float q,w;
	q=1;
	w=(q+c/q)/2;
	while((fabs(w-q))>1e-6){
		q=w;
		w=(q+c/q)/2;
	}
	return w;
}