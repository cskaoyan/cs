#include <stdio.h>

void main ()
{
	int i, j, k, N, m, n, t;                                   //定义数据
	int a[100], c[100], b[100]={0};
	
	printf("请输入一个正整数:");                         //N表示输入数据个数
	scanf("%d",&N);
	printf("请输入 %d 个整数:",N);
	for (i=0; i<N; i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}

	for (i=1; i<N; i++)                                  //对c中数据进行冒泡排序
	{
		for (j=0; j<N-1; j++)
			if (c[j]>c[j+1])
			{
				k=c[j];
				c[j]=c[j+1];
				c[j+1]=k;
			}
	}

	j=0,m=1;                                           //对b中数据进行编号
	for (i=0;i<N;i++)
	{
		n=0;                                           //n表示有大小相同的数的个数；
		for (t=0;t<N;t++)
		{
			if (a[t]==c[j])
			{
				b[t]=m;
				n++;
			}
			if (t==N-1)
				m++;
		}
		j+=n;                                         //将与a{t}进行比较的j后移
	}
	
	printf("输入的数据是:\n");                        //数据的输出
	for (i=0; i<N; i++)
		printf("%d   ",a[i]);
	printf("\n");
	printf("它们相对应的编号是:\n");
	for (i=0; i<N; i++)
		printf("%d   ",b[i]);
}

