#include <stdio.h>
#include <time.h>
int main()
{
		printf("接下来我们玩一个猜数游戏，我将随机产生一个0到100的整数，\n你有6次机会猜这个数，猜对没有奖。\n");
		srand((unsigned)time(NULL));
		int x,y,n=6;
		x=rand()%101+0;
		for ( ; ; )
		{
				scanf("%d",&y);
				if(y<x)
						printf("啊哈，你猜小了呢~\n");
				else if(y>x)
						printf("emmmm你猜大了哦\n");
				else if(y==x)
						{
								printf("猜对啦！\n");

								break;
						}
					n-=1;
					printf("你只剩%d次机会了！\n",n);
					if (n==0)
					{
							printf("抱歉，你已经没有机会了，你失败了。\n其实我出的数字是：%d",x);
							break;
					}
		}
		 return 0;
}