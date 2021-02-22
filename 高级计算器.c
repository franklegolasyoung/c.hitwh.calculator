#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int c,ss(int m),ss1(int m),ss2(int m);
	int aa(int m),bb(int m),cc(int m),pii(int m);
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$$$$$$$$$$$$ Main Menu $$$$$$$$$$$$$$$\n");
	printf("$$$$$$ Basic------------input 1 $$$$$$$\n");
	printf("$$$$$$ Mathmatic--------input 2 $$$$$$$\n");
	printf("$$$$$$ Pro--------------input 3 $$$$$$$\n");
	printf("$$$$$$ Exit-------------input 9 $$$$$$$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	scanf("%d",&c);
	switch(c){
		case 1:
			system("clear");aa(c);break;
		case 2:
			system("clear");bb(c);break;
		case 3:
			system("clear");cc(c);break;
		case 9:
			return 0;break;
		default:
			printf("input error!\n");
			main();
	}
}
int aa(int c) {
	int d;
	int aa1(int m);
	int aa2(int m);
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$$$$$$$$$$$ Select Menu $$$$$$$$$$$$$$\n");
	printf("$$$$$$ Integers---------input 1 $$$$$$$\n");
	printf("$$$$$$ Floats-----------input 2 $$$$$$$\n");
	printf("$$$$$$ Return-----------input 9 $$$$$$$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	scanf("%d",&d);
	switch(d){
		case 1:
			system("clear");aa1(c);
			break;
		case 2:
			system("clear");aa2(c);
			break;
		case 9:
			main();break;
		default:
			printf("input error!\n");aa(c);break;
	}
}
int aa1(int c) {
	int d,a,b;
	double e,f;
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$$$$$$$$$$$ Integer Mode $$$$$$$$$$$$$\n");
	printf("$$$$$$ Plus-------------input 1 $$$$$$$\n");
	printf("$$$$$$ Subtract---------input 2 $$$$$$$\n");
	printf("$$$$$$ Multiply---------input 3 $$$$$$$\n");
	printf("$$$$$$ Divide-----------input 4 $$$$$$$\n");
	printf("$$$$$$ Modulo-----------input 5 $$$$$$$\n");
	printf("$$$$$$ Return-----------input 9 $$$$$$$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	scanf("%d",&d);
	switch(d){
		case 1:system("clear");
			printf("Please input two integers:");
			scanf("%d%d",&a,&b);
			printf("%d+%d=%d\n",a,b,a+b);
			break;
		case 2:system("clear");
			printf("Please input two integers:");
			scanf("%d%d",&a,&b);
			printf("%d-%d=%d\n",a,b,a-b);
			break;
		case 3:system("clear");
			printf("Please input two integers:");
			scanf("%d%d",&a,&b);
			printf("%d*%d=%d\n",a,b,a*b);
			break;
		case 4:system("clear");
			printf("Please input two integers:");
			scanf("%lf%lf",&e,&f);
			printf("%.0lf/%.0lf=%.2lf\n",e,f,e/f);
			break;
		case 5:system("clear");
			printf("Please input two integers:");
			scanf("%d%d",&a,&b);
			printf("%d%%%d=%d\n",a,b,a%b);
			break;
		case 9:
			aa(c);break;
		default:
			printf("input error!\n");aa1(c);break;
	}
}
int aa2(int c) {
	int d,e,f;
	double a,b;
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$$$$$$$$$$$$ Float Mode $$$$$$$$$$$$$$\n");
	printf("$$$$$$ Plus-------------input 1 $$$$$$$\n");
	printf("$$$$$$ Subtract---------input 2 $$$$$$$\n");
	printf("$$$$$$ Multiply---------input 3 $$$$$$$\n");
	printf("$$$$$$ Divide-----------input 4 $$$$$$$\n");
	printf("$$$$$$ Return-----------input 9 $$$$$$$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	scanf("%d",&d);
	switch(d){
		case 1:system("clear");
			printf("Please input two numbers:");
			scanf("%lf%lf",&a,&b);
			printf("%.2lf+%.2lf=%.2lf\n",a,b,a+b);
			break;
		case 2:system("clear");
			printf("Please input two numbers:");
			scanf("%lf%lf",&a,&b);
			printf("%.2lf-%.2lf=%.2lf\n",a,b,a-b);
			break;
		case 3:system("clear");
			printf("Please input two numbers:");
			scanf("%lf%lf",&a,&b);
			printf("%.2lf*%.2lf=%.2lf\n",a,b,a*b);
			break;
		case 4:system("clear");
			printf("Please input two numbers:");
			scanf("%lf%lf",&a,&b);
			printf("%.2lf/%.2lf=%.2lf\n",a,b,a/b);
			break;
		case 9:
			aa(c);break;
		default:
			printf("input error!\n");aa2(c);break;
	}
}
int bb(int a){
	int d,x;
	int ss(int jj);
	int ss1(int jj);
	int ss2(int jj);
	int xx(int jj);
	int pii(int jj);
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$$$$$$$$$$ Mathmatic Menu $$$$$$$$$$$$\n");
	printf("$$$$$$ sin(x)-----------input 1 $$$$$$$\n");
	printf("$$$$$$ cos(x)-----------input 2 $$$$$$$\n");
	printf("$$$$$$ tan(x)-----------input 3 $$$$$$$\n");
	printf("$$$$$$ x^y--------------input 4 $$$$$$$\n");
	printf("$$$$$$ Sqrt(x)----------input 5 $$$$$$$\n");
	printf("$$$$$$ lnX--------------input 6 $$$$$$$\n");
	printf("$$$$$$ log10 X----------input 7 $$$$$$$\n");
	printf("$$$$$$ Pi---------------input 8 $$$$$$$\n");
	printf("$$$$$$ Return-----------input 9 $$$$$$$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	scanf("%d",&d);
	switch(d){
		case 1:system("clear");ss(d);break;
		case 2:system("clear");ss1(d);break;
		case 3:system("clear");ss2(d);break;
		case 4:system("clear");xx(d);break;
		case 5:system("clear");
			printf("Please input X:");
			scanf("%d",&x);
			printf("sqrt(%d)=%.2lf\n",x,sqrt(x));
			break;
		case 6:system("clear");
			printf("Please input X:");
			scanf("%d",&x);
			printf("lnX=%.2lf\n",log(x));
			break;
		case 7:system("clear");
			printf("Please input X:");
			scanf("%d",&x);
			printf("log10 X=%.2lf\n",log10(x));
			break;
		case 8:system("clear");pii(d);break;
		case 9:
			main();break;
		default:
			printf("input error!\n");bb(a);break;
	}
	return 0;
}
int ss(int m) {
	double a=0.0,i,b,dd,pi=3.1415926535897932384626,
	dm=0.0001;
	int k=1;
	printf("Please input the degree:");
	scanf("%lf",&dd);
	b=dd*pi/180;
	i=b;
	while(fabs(i)>dm){
		a+=i;
		k+=2;
		i*=(-1)*b*b/(k*(k-1));
	}
	printf("sin(%.2lf)=%.3lf\n",dd,a);
	return 0;
}
int ss1(int m) {
	double a=0.0,i,b,dd,pi=3.1415926535897932384626,
	dm=0.0001;
	int k=0;
	printf("Please input the degree:");
	scanf("%lf",&dd);
	b=dd*pi/180;
	i=1;
	while(fabs(i)>dm){
		a+=i;
		k+=2;
		i*=(-1)*b*b/(k*(k-1));
	}
	printf("cos(%.2lf)=%.3lf\n",dd,a);
	return 0;
}
int ss2(int m){
	double a=0.0,i,b,ss,cc,dd,pi=3.1415926535897932384626,
	dm=0.000000000001;
	int k=1;
	printf("Please input the degree:");
	scanf("%lf",&dd);
	b=dd*pi/180;
	i=b;
	while(fabs(i)>dm){
		a+=i;
		k+=2;
		i*=(-1)*b*b/(k*(k-1));
	}
	ss=a;
	a=0;
	k=0;
	i=1;
	while(fabs(i)>dm){
		a+=i;
		k+=2;
		i*=(-1)*b*b/(k*(k-1));
	}
	cc=a;
	printf("tan(%.2lf)=%.3lf\n",dd,ss/cc);
}
int xx(int a){
	int i,x,y,as=1;
	printf("Please input X and Y:");
	scanf("%d%d",&x,&y);
	for(i=0;i<y;i++){
		as*=x;
	}
	printf("%d^%d=%d\n",x,y,as);
}
int pii(int a){
	double i,eps=1.0,k=1,s=1;
	int j,m;
	printf("Please input expected eps digit:");
	scanf("%d",&m);
	for(j=1;j<=m;j++)
		eps/=10;
	for(i=1;k>=eps;i++){
		k*=i/(i*2+1);
		s+=k;
	}
	printf("Pi=%.15f\n",s*2);
	return 0;
}
unsigned int Bin2Int(char str[]){
	unsigned n=0;
	int i;
	for(i=0;str[i];i++)
		if(str[i]=='1')
			n=n*2+1;
		else 
			n=n*2; 
	return n;	
}
int cc(int ggg){
	int d,dd;
	int a,b,k,i;
	int remainder[30];
	unsigned int Bin2Int(char str[]);
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$$$$$$$$$$$$$ Pro Mode $$$$$$$$$$$$$$$\n");
	printf("$$$$$$ BIN--------------input 1 $$$$$$$\n");
	printf("$$$$$$ OCT--------------input 2 $$$$$$$\n");
	printf("$$$$$$ DEC--------------input 3 $$$$$$$\n");
	printf("$$$$$$ HEX--------------input 4 $$$$$$$\n");
	printf("$$$$$$ Return-----------input 9 $$$$$$$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	scanf("%d",&d);
	switch(d){
		case 1:
			system("clear");
			printf("Please input a BIN number:");
			unsigned n;
			char str[32];
			scanf("%s",str);
			n=Bin2Int(str);
			printf("OCT=%o\n",n);
			printf("DEC=%u\n",n);
			printf("HEX=%x\n",n);
			break;
		case 2:
			system("clear");
			printf("Please input a OCT number:");
			scanf("%o",&a);
			dd=a;
			k=0;
			while(a!=0){
				b=a/2;
				k++;
				remainder[k]=a-b*2;
				a=a/2;
			}
			printf("BIN=");
			for(i=k;i>=1;i--) printf("%d",remainder[i]);
			printf("\n");
			printf("DEC=%u\n",dd);
			printf("HEX=%x\n",dd);
			break;
		case 3:
			system("clear");
			printf("Please input a DEC number:");
			scanf("%d",&a);
			dd=a;
			k=0;
			while(a!=0){
				b=a/2;
				k++;
				remainder[k]=a-b*2;
				a=a/2;
			}
			printf("BIN=");
			for(i=k;i>=1;i--) printf("%d",remainder[i]);
			printf("\n");
			printf("OCT=%o\n",dd);
			printf("HEX=%x\n",dd);
			break;
		case 4:
			system("clear");
			printf("Please input a HEX number:");
			scanf("%x",&a);
			dd=a;
			k=0;
			while(a!=0){
				b=a/2;
				k++;
				remainder[k]=a-b*2;
				a=a/2;
			}
			printf("BIN=");
			for(i=k;i>=1;i--) printf("%d",remainder[i]);
			printf("\n");
			printf("OCT=%o\n",dd);
			printf("DEC=%u\n",dd);
			break;
		case 9:
			main();break;
		default:
			printf("input error!\n");cc(a);break;
	}
	return 0;
}