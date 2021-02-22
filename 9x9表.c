#include <stdio.h>
int main(int argc, char *argv[]) {
	int a,b;
	a=9;
	do{
		b=1;
		do{
			printf("%d*%d=%d ",a,b,a*b);
			b++;
		}while(b<=a);
		a--;
		printf("\n");
	}while(a>=1);
}