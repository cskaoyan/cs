#include <stdio.h>
#include <string.h>

void leftTrim (char str[]);

void main ()
{
	int i,j;
	char *p,*q;
	char a[6];

	for (i=0;i<=200;i++)
	{
		j=i*i;
		sprintf(a,"%5d",j);                                   //将j转化成字符串
		leftTrim (a);
		//讲p指向第一个数字
		p=&a[0];
		//将q指向最后一个数字
		q=p+strlen (a)-1;
		
		while (*p==*q&&p<=q)
		{
			p++;
			q--;
		}
		if (p>=q)
			printf("%3d的平方   %5d是回文数\n",i,j);
	}
}

//清除字符串前方的空格
void leftTrim (char str[])
{
	int i;
	for (i=0;str[i]==' ';i++)                       //将str[i]移动至第一个非空
		;
	strcpy (str,str+i);                             //将取出空格段的字符数组重新覆盖原数组
}

