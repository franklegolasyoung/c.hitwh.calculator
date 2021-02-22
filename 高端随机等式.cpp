#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;
int main(int argc, char *argv[]) {
	int akc(int a);
	int ack(void);
	char k;
	int m;
	srand(time(NULL));
	cout<<"Integers mental caculation is on!"<<endl;
	cout<<"Are you ready?"<<endl;
	cout<<"Y or N?"<<endl;
	cin>>k;
	if(k=='Y') m=ack();
	else cout<<"ure such a pussy.";
	sleep(5);
	cout<<m<<endl<<"Are you right?";
	return 0;
}
int ack(void){
	int akc(int a);
	int a,b,i,sum,kk;
	a=rand()%1000+1;
	b=rand()%1000+1;
	i=rand()%4+1; 
	switch(i){
		case 1:
			cout<<a<<"+"<<b;
			sum=a+b;
			kk=akc(sum);
			break;
		case 2:
			cout<<a<<"-"<<b;
			sum=a-b;
			kk=akc(sum);
			break;
		case 3:
			cout<<a<<"*"<<b;
			sum=a*b;
			kk=akc(sum);
			break;
		case 4:
			cout<<a<<"/"<<b;
			sum=a/b;
			kk=akc(sum);
			break;
	}
	return kk;
}
int akc(int a){
	int i,c;
	c=rand()%1000+1;
	i=rand()%4+1;
	switch(i){
		case 1:
			cout<<"+"<<c<<"=?"<<endl;
			return a+c;
			break;
		case 2:
			cout<<"-"<<c<<"=?"<<endl;
			return a-c;
			break;
		case 3:
			cout<<"*"<<c<<"=?"<<endl;
			return a*c;
			break;
		case 4:
			cout<<"/"<<c<<"=?"<<endl;
			return a/c;
			break;
		}
	return 0;
}