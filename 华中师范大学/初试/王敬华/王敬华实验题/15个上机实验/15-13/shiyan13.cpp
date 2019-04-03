#include <stdio.h>

int jisuan (int m,int n);                                  //用于计算两个数的最大公约数

void main ()
{
	int a,b,c,k;
	printf("请输入两个正整数:");
	scanf("%d%d",&a,&b);
	
	//比较输入数据大小，把较大数赋值给a
	if (a<b)
	{
		c=b;
		b=a;
		a=c;
	}
	k=jisuan (a,b);
	printf("输入两个数字的最大公约数是: %d \n",k);
}

//计算最大公约数
int jisuan (int m,int n)
{
	int t;
	while(n!=0)
	{
		t=m%n;
		m=n;
		n=t;
	}
	return (m);                          //将最大公约数返回
}
