#include <stdio.h>
#include <math.h>
                                                    //因为要用到开根号运算
void main()
{
	int i,j,p,k,flag,sum;                                               //p用以计算素数的个数
	int a[2000]={0},b[2000]={0};                                     //a[2000]存放素数，b[2000]存放差值。

	//求2000以内的素数，存入a[]内，并输出
	printf("2000以内的素数有:\n");
	for(p=1,i=3;i<2000;i++)
	{
		flag=1;
		for(j=2;j<sqrt(i)+1;j++)                     //判断该数是否为素数
		{
			if(i%j==0)
				flag=0;
		}
		if(flag==1)
		a[p++]=i;
	}
	a[0]=2;

	//计算相邻素数前后差并存进b[]内，并输出
	for(i=0;i<p;i++)
	{
		if (i%13==0)
			printf("\n");
		printf("%-6d",a[i]);
	}
	printf("\n\n素数的总数= %d \n\n",p);
	printf("其差依次为:\n");
	for(i=0;i<p-1;i++)
	{
		b[i]=a[i+1]-a[i];
		if (i%13==0)
			printf("\n");
		printf("%-6d",b[i]);
	}
	printf("\n\n");

	//找出b中连续和等于1898的情况
	k=0;
    printf("从第X位到第X位差之和为1898的情况有:\n\n");
	for(i=0;i<p-1;i++)
	for(j=i,sum=0;j<p-1&&sum<1898;j++)
	{
		sum+=b[j];
		if(sum>1898)
			break;
		if(sum==1898)
		{
			//下面一句可要可不要
			printf("在第二行数中初始位置是第%d位  --  结束位置是第%d位\n\n",i+1,j+1);
			k++;
		}
	}
	printf("总共有 %d 种情况\n",k);
}