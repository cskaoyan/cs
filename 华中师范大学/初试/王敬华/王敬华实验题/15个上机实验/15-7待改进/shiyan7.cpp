#include <stdio.h>
#include <string.h>

char*replace (char *str,char *substr,char *newstr);

void main ()
{
	char *p;
	char shuru[100],substr[10],newstr[10];
	//数据的读入
	printf("请输入一段字符串:\n");
	scanf("%s",shuru);
	printf("请输入要被替换的子串:\n");
	scanf("%s",substr);
	printf("请输入替换字串的字符:\n");
	scanf("%s",newstr);
	if (strlen(substr)!=strlen(newstr))
		printf("输入的替换字符串有误，请重新输入");
	p=(replace (shuru,substr,newstr));
	printf("%s\n",p);
}

//字符串替换函数
char*replace (char *str,char *substr,char *newstr)
{
	char *p;
	int i,j,a,b,e,c=0;
	i=strlen (str);
	j=strlen (substr);

	p=&str[0];
	for (a=0;a<i;a++)
	{
		if (*(p+a)==substr[0])                                                         //找到要被修改的字串的位置
		{
			for (b=0;b<j;b++)
			{
				if (*(p+b)==substr[b])
				{
					str[a+b]=newstr[b];                                              //修改子串
					c++;                                                             //用于统计修改次数，若不等于子串长度，则不予输出
				}
				else
					break;
			}
		}
		else
			continue;
	}
	return (str);                                                                //返回调整后的数组
}
					


