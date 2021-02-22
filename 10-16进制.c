#include <stdio.h>
int main()
{
int a;
scanf("%d",&a);
printf("10进制形式：a=%d,254=%d\n",a,254);
printf("16进制形式：a=%x,254=%x\n",a,254);
int b=(int)a;
int c=(int)(a&0xFF);
printf("10进制形式：b=%d,c=%d\n",b,c);
printf("16进制形式：b=%x,c=%x\n",b,c);
return 0;
}
/*
--------------------- 
作者：Don_sandman 
来源：CSDN 
原文：https://blog.csdn.net/don_sandman/article/details/78016284 
版权声明：本文为博主原创文章，转载请附上博文链接！
*/